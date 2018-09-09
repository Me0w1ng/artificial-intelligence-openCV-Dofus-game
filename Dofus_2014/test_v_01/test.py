#!/usr/bin/python
# -*- coding: utf-8 -*-

#m = MouseController()
#m.click(500, 800, 1)

from pymouse import PyMouse
import time


m = PyMouse()


right = [1163,384]
bottom = [600, 660]
left = [204,384]
up = [683, 1]

wait_init = 2
wait_run = 10

print '### -1, 4'
time.sleep(wait_init)

# Move Right
m.move(right[0], right[1])
m.click(right[0], right[1])
time.sleep(wait_run)

# Move Down
m.move(bottom[0], bottom[1])
m.click(bottom[0], bottom[1])
time.sleep(wait_run)

# Move Left
m.move(left[0], left[1])
m.click(left[0], left[1])
time.sleep(wait_run)

# Move Down
m.move(up[0], up[1])
m.click(up[0], up[1])
time.sleep(wait_run)

