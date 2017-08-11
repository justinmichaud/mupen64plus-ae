#ifndef VR_SENSOR_HEADER
#define VR_SENSOR_HEADER

#include "VectorMath.h"

int SetupSensor();
bool remapCoordinateSystem(const XMATRIX &inR, const int X, const int Y, XMATRIX &outR);
int pollForSensorData();
int DestroySensor();
extern XMATRIX VR_TRANSFORM_MAT;
#endif