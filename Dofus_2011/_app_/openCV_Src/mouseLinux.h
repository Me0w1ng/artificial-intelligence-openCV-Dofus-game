/*
 * mouseLinux.h
 *
 *  Created on: 05/06/2011
 *      Author: israel
 */

#ifndef MOUSELINUX_H_
#define MOUSELINUX_H_

#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <X11/Xutil.h>
//#include <X11/Xlib.h>

using namespace std;

class mouseLinux {
public:
	mouseLinux();
	void click(int button);
	void move(int x, int y);
	void moveReset();
	void moveTo(int x, int y);
	void coords(int *x, int *y);
	void pixel_color(int x, int y, XColor *color);
private:
	Display *display;
	int xOriginal, yOriginal;
};

#endif /* MOUSELINUX_H_ */
