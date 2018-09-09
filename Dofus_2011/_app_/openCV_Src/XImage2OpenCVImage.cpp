#include "XImage2OpenCVImage.h"

/*XImage2OpenCVImage::XImage2OpenCVImage() {
	;
}

IplImage *XImage2OpenCVImage::convertir(XImage& _xImage, Display& _xDisplay, Screen& _xScreen) {
	XColor color;
	//    cout << "WxH: " << imageData->width << "x" << imageData->height << ": " << imageData->data[0] << imageData->data[1] << imageData->data[2] << imageData->format << endl;
	IplImage* ocvImage = cvCreateImage(cv::Size(_xImage.width, _xImage.height), IPL_DEPTH_8U, 3);

	if (_xScreen.depths->depth == 24) {
		// Some of the following code is borrowed from http://www.roard.com/docs/cookbook/cbsu19.html ("Screen grab with X11" - by Marko Riedel, with an idea by Alexander Malmberg)
		unsigned long rmask = _xScreen.root_visual->red_mask, gmask = _xScreen.root_visual->green_mask, bmask = _xScreen.root_visual->blue_mask;
		unsigned long rshift, rbits, gshift, gbits, bshift, bbits;
		unsigned char colorChannel[3];

		rshift = 0;
		rbits = 0;
		while (!(rmask & 1)) {
			rshift++;
			rmask >>= 1;
		}
		while (rmask & 1) {
			rbits++;
			rmask >>= 1;
		}
		if (rbits > 8) {
			rshift += rbits - 8;
			rbits = 8;
		}

		gshift = 0;
		gbits = 0;
		while (!(gmask & 1)) {
			gshift++;
			gmask >>= 1;
		}
		while (gmask & 1) {
			gbits++;
			gmask >>= 1;
		}
		if (gbits > 8) {
			gshift += gbits - 8;
			gbits = 8;
		}

		bshift = 0;
		bbits = 0;
		while (!(bmask & 1)) {
			bshift++;
			bmask >>= 1;
		}
		while (bmask & 1) {
			bbits++;
			bmask >>= 1;
		}
		if (bbits > 8) {
			bshift += bbits - 8;
			bbits = 8;
		}

		for (int x = 0; x < _xImage.width; x++) {
			for (int y = 0; y < _xImage.height; y++) {
				color.pixel = XGetPixel(&_xImage, x, y);
				colorChannel[0] = ((color.pixel >> bshift) & ((1 << bbits) - 1)) << (8 - bbits);
				colorChannel[1] = ((color.pixel >> gshift) & ((1 << gbits) - 1)) << (8 - gbits);
				colorChannel[2] = ((color.pixel >> rshift) & ((1 << rbits) - 1)) << (8 - rbits);
				CV_IMAGE_ELEM(ocvImage, uchar, y, x * ocvImage->nChannels) = colorChannel[0];
				CV_IMAGE_ELEM(ocvImage, uchar, y, x * ocvImage->nChannels + 1) = colorChannel[1];
				CV_IMAGE_ELEM(ocvImage, uchar, y, x * ocvImage->nChannels + 2) = colorChannel[2];
			}
		}
	}
	else { // Extremly slow alternative for non 24bit-depth
		Colormap colmap = DefaultColormap(&_xDisplay, DefaultScreen(&_xDisplay));
		for (int x = 0; x < _xImage.width; x++) {
			for (int y = 0; y < _xImage.height; y++) {
				color.pixel = XGetPixel(&_xImage, x, y);
				XQueryColor(&_xDisplay, colmap, &color);
				CV_IMAGE_ELEM(ocvImage, uchar, y, x * ocvImage->nChannels) = color.blue;
				CV_IMAGE_ELEM(ocvImage, uchar, y, x * ocvImage->nChannels + 1) = color.green;
				CV_IMAGE_ELEM(ocvImage, uchar, y, x * ocvImage->nChannels + 2) = color.red;
			}
		}
	}
	return ocvImage;
}*/
