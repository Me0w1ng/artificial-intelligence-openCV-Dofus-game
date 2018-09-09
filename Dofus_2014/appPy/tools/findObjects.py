#!/usr/bin/python
# -*- coding: utf-8 -*-

import cv2
import numpy as np
import time

class FindObjects:

	# Variables de inicio
	_img_find = None
	_img_source = None

	# Variables de configuracion
	_imread_color = 1

	# Variable que genero la aplicacion
	_match_coords = None
	_img_source_match = None
	_img_source_save = 'assets/logs/find_objects/log'



	def __init__(self, _img_source=None, _img_find=None, _imread_color=1):
		self._img_find = _img_find
		self._img_source = _img_source
		self._imread_color = _imread_color

		self._match()
		#self._match_show()



	def _correct_init(self):
		if (self._img_source == None):
			print 'Error FindObjects: Falta la imagen fuente'
			return False

		if (self._img_find == None):
			print 'Error FindObjects: Falta la imagen del patrón'
			return False
		return True



	def _match(self):
		if ( self._correct_init() ):
			img1 = cv2.imread(self._img_find, self._imread_color)
			img2 = self._img_source_match = cv2.imread(self._img_source, self._imread_color)

			detector = cv2.SIFT()
			norm = cv2.NORM_L2
			matcher = cv2.BFMatcher(norm)

			kp1, desc1 = detector.detectAndCompute(img1, None)
			kp2, desc2 = detector.detectAndCompute(img2, None)
			print 'img1 - %d features, img2 - %d features' % (len(kp1), len(kp2))

			raw_matches = matcher.knnMatch(desc1, trainDescriptors = desc2, k = 2) #2
			p1, p2, kp_pairs = self._filter_matches(kp1, kp2, raw_matches, 0.75)
			if len(p1) >= 15:
				H, status = cv2.findHomography(p1, p2, cv2.RANSAC, 5.0)
				self._match_coords = p2
				print '%d / %d  inliers/matched' % (np.sum(status), len(status))
				print '%d Total points' % (len(status))
			else:
				H, status = None, None
				self._match_coords = None
				print '%d matches found, not enough for homography estimation' % len(p1)

		pass



	def _match_coords_get(self):
		return self._match_coords



	def _match_coords_points(self):
		if (self._match_coords != None):
			for coord in self._match_coords:
				red = 255
				green = 255
				blue = 255

				cv2.circle(self._img_source_match, (coord[0],coord[1]), 1, (0,0,255), 3)
				cv2.circle(self._img_source_match, (coord[0],coord[1]), 10, (red,green,blue), 1)
			return True
		else:
			print "Warning FindObjects: No hay coordenadas por imprimir"
			return False




	def _match_save(self):
		if (self._match_coords_points()):
			image_name = self._img_source_save+time.strftime('_%Y_%m_%d__%H_%M_%S')+'.png'
			cv2.imwrite(image_name, self._img_source_match)
			return True



	def _match_show(self):

		if (self._match_coords_points()):
			win = 'Show Match :: Find Objects'
			cv2.imshow(win, self._img_source_match)
			cv2.moveWindow(win, 0, 0)

			cv2.waitKey()
			cv2.destroyAllWindows()




	def _filter_matches(self, kp1, kp2, matches, ratio = 0.75):
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

	pass

