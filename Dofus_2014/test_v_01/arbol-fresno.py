#!/usr/bin/env python

'''
Feature-based image matching sample.

USAGE
  arbol-fresno.py [--feature=<sift|surf|orb>[-flann]] [ <image1> <image2> ]

  --feature  - Feature to use. Can be sift, surf of orb. Append '-flann' to feature name
				to use Flann-based matcher instead bruteforce.

  Press left mouse button on a feature point to see its matching point.
'''

import numpy as np
import cv2
from common import anorm, getsize
from random import randint
# import uinput

# ./arbol-fresno.py --feature=surf arbol-fresno.jpg screen-arbol-fresno-1-0.png


FLANN_INDEX_KDTREE = 1  # bug: flann enums are missing
FLANN_INDEX_LSH    = 6


def init_feature(name):
	chunks = name.split('-')
	if chunks[0] == 'sift':
		detector = cv2.SIFT()
		norm = cv2.NORM_L2
	elif chunks[0] == 'surf':
		detector = cv2.SURF(800)
		norm = cv2.NORM_L2
	elif chunks[0] == 'orb':
		detector = cv2.ORB(400)
		norm = cv2.NORM_HAMMING
	else:
		return None, None
	if 'flann' in chunks:
		if norm == cv2.NORM_L2:
			flann_params = dict(algorithm = FLANN_INDEX_KDTREE, trees = 5)
		else:
			flann_params= dict(algorithm = FLANN_INDEX_LSH,
							   table_number = 6, # 12
							   key_size = 12,     # 20
							   multi_probe_level = 1) #2
		matcher = cv2.FlannBasedMatcher(flann_params, {})  # bug : need to pass empty dict (#1329)
	else:
		matcher = cv2.BFMatcher(norm)
	return detector, matcher


def filter_matches(kp1, kp2, matches, ratio = 0.75):
	mkp1, mkp2 = [], []
	for m in matches:
		if len(m) == 2 and m[0].distance < m[1].distance * ratio:
			m = m[0]
			mkp1.append( kp1[m.queryIdx] )
			mkp2.append( kp2[m.trainIdx] )
	p1 = np.float32([kp.pt for kp in mkp1])
	p2 = np.float32([kp.pt for kp in mkp2])
	kp_pairs = zip(mkp1, mkp2)
	return p1, p2, kp_pairs


if __name__ == '__main__':
	print __doc__

	import sys, getopt
	opts, args = getopt.getopt(sys.argv[1:], '', ['feature='])
	opts = dict(opts)
	feature_name = opts.get('--feature', 'sift')
	try: fn1, fn2 = args
	except:
		print 'Error: Get image pattern and image search.'
		sys.exit(1)

	img1 = cv2.imread(fn1, 1)
	img2 = cv2.imread(fn2, 1)
	detector, matcher = init_feature(feature_name)

	if detector != None:
		print 'using', feature_name
	else:
		print 'unknown feature:', feature_name
		sys.exit(1)


	kp1, desc1 = detector.detectAndCompute(img1, None)
	kp2, desc2 = detector.detectAndCompute(img2, None)
	print 'img1 - %d features, img2 - %d features' % (len(kp1), len(kp2))

	def match_and_draw(win):
		print 'matching...'
		raw_matches = matcher.knnMatch(desc1, trainDescriptors = desc2, k = 2) #2
		p1, p2, kp_pairs = filter_matches(kp1, kp2, raw_matches)
		if len(p1) >= 4:
			H, status = cv2.findHomography(p1, p2, cv2.RANSAC, 5.0)
			print '%d / %d  inliers/matched' % (np.sum(status), len(status))
		else:
			H, status = None, None
			print '%d matches found, not enough for homography estimation' % len(p1)

		cont = 5
		for coord in p2:
			red = randint(10,250)
			green = randint(10,250)
			blue = randint(10,250)

			red = 255
			green = 255
			blue = 255

			cv2.circle(img2,(coord[0],coord[1]), 1, (0,0,255), 3)
			cv2.circle(img2, (coord[0],coord[1]), cont, (red,green,blue), 2)
			
			cont = cont + 1

		cv2.imshow(win,img2)
		cv2.moveWindow(win, 1, 1)
		#cv2.waitKey()

	match_and_draw('Detect objects in screenshot')
	cv2.waitKey(1000)
	cv2.destroyAllWindows()
