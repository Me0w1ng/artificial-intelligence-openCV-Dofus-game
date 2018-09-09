#ifndef CAPTURARPANTALLA_H_
#define CAPTURARPANTALLA_H_

#include <X11/Xutil.h>
#include <opencv/cv.h>
//#include "XImage2OpenCVImage.h"

class capturarPantalla {
private:
	// X resources
	//Display *display;
	//Screen *screen;

	// OpenCV Resource
	//XColor col;

	//XImage2OpenCVImage xImg_2_OpenCV;

	int startX;
	int startY;
	unsigned int widthX;
	unsigned int heightY;

public:
	capturarPantalla();
	//XImage *capturaX11();
	//IplImage *capturaOpenCV();
};

#endif /* CAPTURARPANTALLA_H_ */
