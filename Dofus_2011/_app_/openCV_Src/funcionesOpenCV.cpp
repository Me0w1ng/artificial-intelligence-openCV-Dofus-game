#include "funcionesOpenCV.h"

funcionesOpenCV::funcionesOpenCV() {

}

void funcionesOpenCV::mouseHandler(int event, int x, int y, int flags, void *param) {
	switch (event) {
		case CV_EVENT_LBUTTONDOWN:
			printf("CV_EVENT_LBUTTONDOWN || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_RBUTTONDOWN:
			//printf("CV_EVENT_RBUTTONDOWN || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_MBUTTONDOWN:
			//printf("CV_EVENT_MBUTTONDOWN || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_LBUTTONUP:
			//printf("CV_EVENT_LBUTTONUP || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_RBUTTONUP:
			//printf("CV_EVENT_RBUTTONUP || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_MBUTTONUP:
			//printf("CV_EVENT_MBUTTONUP || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_LBUTTONDBLCLK:
			//printf("CV_EVENT_LBUTTONDBLCLK || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_RBUTTONDBLCLK:
			//printf("CV_EVENT_RBUTTONDBLCLK || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_MBUTTONDBLCLK:
			//printf("CV_EVENT_LBUTTONDOWN || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
		case CV_EVENT_MOUSEMOVE:
			//printf("CV_EVENT_MOUSEMOVE || event: %d || x: %d || y: %d || Flags: %d\n", event, x, y, flags);
			break;
	}
}
