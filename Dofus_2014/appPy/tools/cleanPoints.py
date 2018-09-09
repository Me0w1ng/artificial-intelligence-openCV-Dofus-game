#!/usr/bin/python
# -*- coding: utf-8 -*-

import numpy as np

class CleanPoints:
	# Variables de inicio
	_max_up = 16
	_max_left = 243
	_max_down = 640
	_max_right = 1120

	def __init__(self):
		pass


	def clean_points(self, points):
		index = []

		for a in range(len(points)):
			if (
				points[a][0] < self._max_left or points[a][0] > self._max_right
				or points[a][1] < self._max_up or points[a][1] > self._max_down
			):
				#print 'delete: ', points[a]
				index.append(a)

		new_points = np.delete(points, index, 0)
		#print 'index', index
		#print 'new_points', new_points

		return new_points

	pass

