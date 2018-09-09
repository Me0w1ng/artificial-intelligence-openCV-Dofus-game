#include "mouseLinux.h"

//mouseLinux
mouseLinux::mouseLinux() {
	display = XOpenDisplay(NULL);
	coords(&xOriginal, &yOriginal);
}

// Simulate mouse click
void mouseLinux::click(int button) {
	// Create and setting up the event
	XEvent event;
	memset(&event, 0, sizeof(event));
	event.xbutton.button = button;
	event.xbutton.same_screen = True;
	event.xbutton.subwindow = DefaultRootWindow (display);
	while (event.xbutton.subwindow) {
		event.xbutton.window = event.xbutton.subwindow;
		XQueryPointer(display, event.xbutton.window, &event.xbutton.root, &event.xbutton.subwindow, &event.xbutton.x_root, &event.xbutton.y_root, &event.xbutton.x, &event.xbutton.y, &event.xbutton.state);
	}
	// Press
	event.type = ButtonPress;
	if (XSendEvent(display, PointerWindow, True, ButtonPressMask, &event) == 0)
		fprintf(stderr, "Error to send the event!\n");
	XFlush(display);
	usleep(1);
	// Release
	event.type = ButtonRelease;
	if (XSendEvent(display, PointerWindow, True, ButtonReleaseMask, &event) == 0)
		fprintf(stderr, "Error to send the event!\n");
	XFlush(display);
	usleep(1);
}

// Move mouse pointer
void mouseLinux::move(int x, int y) {
	XWarpPointer(display, None, None, 0, 0, 0, 0, x, y);
	XFlush(display);
	usleep(1);
}

void mouseLinux::moveReset() {
	int xTmp = 0, yTmp = 0;
	coords(&xTmp, &yTmp);
	move(-xTmp, -yTmp);
}

void mouseLinux::moveTo(int x, int y) {
	int xTmp = 0, yTmp = 0;
	coords(&xTmp, &yTmp);
	XWarpPointer(display, None, None, 0, 0, 0, 0, -xTmp, -yTmp);
	XWarpPointer(display, None, None, 0, 0, 0, 0, x, y);
	XFlush(display);
	usleep(1);
}

// Get mouse coordinates
void mouseLinux::coords(int *x, int *y) {
	XEvent event;
	XQueryPointer(display, DefaultRootWindow (display), &event.xbutton.root, &event.xbutton.window, &event.xbutton.x_root, &event.xbutton.y_root, &event.xbutton.x, &event.xbutton.y, &event.xbutton.state);
	*x = event.xbutton.x;
	*y = event.xbutton.y;
}

// Get pixel color at coordinates x,y
void mouseLinux::pixel_color(int x, int y, XColor *color) {
	XImage *image;
	image = XGetImage(display, DefaultRootWindow (display), x, y, 1, 1, AllPlanes, XYPixmap);
	color->pixel = XGetPixel (image, 0, 0);
	XFree(image);
	XQueryColor(display, DefaultColormap(display, DefaultScreen (display)), color);
}
