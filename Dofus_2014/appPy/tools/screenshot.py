#!/usr/bin/python
# -*- coding: utf-8 -*-

import gtk.gdk
import time


class Screenshot:

	put_path = 'assets/logs/screenshots/'
	screen = put_path+'screenshot.png'
	log = None

	def __init__(self):
		self._screenshot()


	def _screenshot(self):
		self.log = self.put_path+time.strftime('_%Y_%m_%d__%H_%M_%S')+'.png'
		w = gtk.gdk.get_default_root_window()
		sz = w.get_size()
		print 'The size of the window is %d x %d' % sz

		pb = gtk.gdk.Pixbuf(gtk.gdk.COLORSPACE_RGB,False,8,sz[0],sz[1])
		pb = pb.get_from_drawable(w,w.get_colormap(),0,0,0,0,sz[0],sz[1])

		if (pb != None):
			pb.save(self.screen, 'png')
			pb.save(self.log, 'png')
			print 'Screenshot saved to screenshot.png.'
		else:
			print 'Unable to get the screenshot.'


	def _file_name(self):
		return self.screen


	def _file_log(self):
		return self.log


	pass
