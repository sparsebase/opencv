/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_opencv_engine_BinderConnector */

#ifndef _Included_org_opencv_engine_BinderConnector
#define _Included_org_opencv_engine_BinderConnector
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opencv_engine_BinderConnector
 * Method:    Connect
 * Signature: ()Landroid/os/IBinder;
 */
JNIEXPORT jobject JNICALL Java_org_opencv_engine3_BinderConnector_Connect
  (JNIEnv *, jobject);

/*
 * Class:     org_opencv_engine_BinderConnector
 * Method:    Init
 * Signature: (Lorg/opencv/engine/MarketConnector;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_opencv_engine3_BinderConnector_Init
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opencv_engine_BinderConnector
 * Method:    Final
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_opencv_engine3_BinderConnector_Final
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
