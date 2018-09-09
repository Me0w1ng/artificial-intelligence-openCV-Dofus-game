#include "capturarPantalla.h"

capturarPantalla::capturarPantalla() {
	display = XOpenDisplay(NULL);
	screen = DefaultScreenOfDisplay(display);
	startX = 0;
	startY = 0;
	widthX = screen->width;
	heightY = screen->height;
}

XImage *capturarPantalla::capturaX11() {
	return XGetImage(display, DefaultRootWindow(display), startX, startY, widthX, heightY, AllPlanes, ZPixmap);
}

/*IplImage *capturarPantalla::capturaOpenCV() {
	XImage *xImageSample = capturaX11();
	return xImg_2_OpenCV.convertir(*xImageSample, *display, *screen);
}
*/
