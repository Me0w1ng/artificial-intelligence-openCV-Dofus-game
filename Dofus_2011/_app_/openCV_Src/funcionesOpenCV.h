/*
 * funcionesOpenCV.h
 *
 *  Created on: 05/06/2011
 *      Author: israel
 */

#ifndef FUNCIONESOPENCV_H_
#define FUNCIONESOPENCV_H_

#include <opencv/cv.h>
#include <opencv/highgui.h>

class funcionesOpenCV {
private:

public:
	funcionesOpenCV();
	void mouseHandler(int event, int x, int y, int flags, void *param);
};

#endif /* FUNCIONESOPENCV_H_ */
