#ifndef VR_SENSOR_HEADER
#define VR_SENSOR_HEADER

#include <android/log.h>
#define  LOG_TAG    "VR-TESTING"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

const int EYE_DISTANCE = 20;

int VRSetupSensor();
bool VRRemapCoordinateSystem(float inR[4][4], const int X, const int Y, float outR[4][4]);
int VRPollForSensorData();
void VRUpdateTransform();
int VRDestroySensor();
extern float VR_TRANSFORM_MAT[4][4];
extern bool VR_LEFT_EYE;
extern bool VR_CURRENTLY_RENDERING;
extern bool VR_HAS_CLEARED_SCREEN;
#endif
