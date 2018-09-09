#!/usr/bin/python
# -*- coding: utf-8 -*-

#m = MouseController()
#m.click(500, 800, 1)

from pymouse import PyMouse

class MouseController:
	m = PyMouse()

	def click(self, x=0, y=0, b=1):
		self.m.click(x, y, b)
		pass

	def move(self, x=0, y=0):
		self.m.move(x, y)
		pass

	pass

