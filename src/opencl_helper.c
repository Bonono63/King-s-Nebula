#include "opencl_helper.h"
#include "CL/cl.h"

int getNumberOfPlatforms() {
	cl_uint number{0};
	clGetPlatformIDs(number, NULL, 0);
	if (number == 0) {
		return -1;
	}
	return number;
}