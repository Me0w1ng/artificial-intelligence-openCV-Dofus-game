#!/usr/bin/python
# -*- coding: utf-8 -*-

import time
from mouseController import MouseController

class PathTrace:
	m = MouseController()
	start_map = 0
	next_map_mouse = {
		'up' : [683, 1],
		'right' : [1163,384],
		'down' : [600, 660],
		'left' : [204,384]
	}
	map_mouse = {
		'bosque' : [
			{
				'map' : [1, 4],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 4],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [-1, 4],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [-1, 5],
				'mouse' : next_map_mouse['down']
			},
			{
				'map' : [0, 5],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [1, 5],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [2, 5],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [2, 6],
				'mouse' : next_map_mouse['down']
			},
			{
				'map' : [1, 6],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 6],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [-1, 6],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 6],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [0, 7],
				'mouse' : next_map_mouse['down']
			},
			{
				'map' : [-1, 7],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 7],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [1, 7],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [2, 7],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [3, 7],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [3, 8],
				'mouse' : next_map_mouse['down']
			},
			{
				'map' : [2, 8],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [1, 8],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 8],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 9],
				'mouse' : next_map_mouse['down']
			},
			{
				'map' : [1, 9],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [0, 9],
				'mouse' : next_map_mouse['left']
			},
			{
				'map' : [0, 8],
				'mouse' : next_map_mouse['up']
			},
			{
				'map' : [1, 8],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [2, 8],
				'mouse' : next_map_mouse['right']
			},
			{
				'map' : [2, 7],
				'mouse' : next_map_mouse['up']
			},
			{
				'map' : [2, 6],
				'mouse' : next_map_mouse['up']
			},
			{
				'map' : [2, 5],
				'mouse' : next_map_mouse['up']
			},
			{
				'map' : [2, 4],
				'mouse' : next_map_mouse['up']
			},
		]
	}

	def __init__(self):
		pass



	def next_map(self):
		if self.start_map < len(self.map_mouse['bosque'])-1:
			self.start_map = self.start_map + 1
		else:
			self.start_map = 0
		pass



	def map_bosque(self):
		map_number = self.start_map
		print 'map_number', map_number

		this_map = self.map_mouse['bosque'][map_number]['map']
		next_mouse = self.map_mouse['bosque'][map_number]['mouse']
		print 'map', this_map
		#print 'mouse', next_mouse

		print ''
		
		self.m.click(next_mouse[0], next_mouse[1])
		self.next_map()
		pass
	pass




