#!/usr/bin/python
# -*- coding: utf-8 -*-

import time
from random import randint
from tools import MouseController, FindObjects, Screenshot, PathTrace, CleanPoints

resource_path = 'assets/images/game_core/resources/'
wait_init = 1
wait_for = 20 #15
wait_run = 10
repeticiones = 0;

if __name__ == "__main__":
	
	time.sleep(wait_init)
	
	m = MouseController()
	pt = PathTrace()
	c = CleanPoints()

	while (True):
		repeticiones = repeticiones + 1
		print ''
		print 'Repeticion: #', repeticiones

		print '####################################'
		print 'SCREENSHOT'
		print '####################################'
		screenshot_path = Screenshot()._file_log()

		print ''
		print '####################################'
		print 'FIND FRESNO TREE'
		print '####################################'
		arbol_fresno = FindObjects(screenshot_path, resource_path+'tree-fresno.png', 1)
		arbol_fresno._match_save()
		pointer = arbol_fresno._match_coords_get()


		if (pointer != None and pointer[2] != None):
			pointer = c.clean_points(pointer)

			print ''
			print '####################################'
			print 'MAP FOREST NOW'
			print '####################################'
			print pt.map_mouse['bosque'][pt.start_map]['map']
			
			print ''
			print '####################################'
			print 'MOUSE CLICK'
			print '####################################'
			pointer_total = len(pointer)-1
			random = randint(0, pointer_total)
			click = pointer[random]
			m.click(click[0], click[1])

			print ''
			print 'Wait ', wait_for, 'seconds'
			print ''
			time.sleep(wait_for)
		else:
			print ''
			print '####################################'
			print 'MAP FOREST'
			print '####################################'
			pt.map_bosque()
			print ''
			print 'Wait ', wait_run, 'seconds'
			print ''
			time.sleep(wait_run)
			# Aqui va el codigo que traza la ruta y cambia de un escenario a otro.
			# Por ahora estara trazado de forma semi-automatica que será escenario 1, 2, 3, 4, 1, 2, 3, 4...
			# Posteriormente detectara (OpenCV) en que escenario te encuentras y de ahí pasara al siguiente escenario.

			pass
