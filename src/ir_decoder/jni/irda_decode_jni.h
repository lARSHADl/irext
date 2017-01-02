﻿/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_irext_remote_service_DecodeService */

#ifndef _Included_net_irext_remote_service_DecodeService
#define _Included_net_irext_remote_service_DecodeService
#ifdef __cplusplus
extern "C" {
#endif
#undef net_irext_remote_service_DecodeService_BIND_ABOVE_CLIENT
#define net_irext_remote_service_DecodeService_BIND_ABOVE_CLIENT 8L
#undef net_irext_remote_service_DecodeService_BIND_ADJUST_WITH_ACTIVITY
#define net_irext_remote_service_DecodeService_BIND_ADJUST_WITH_ACTIVITY 128L
#undef net_irext_remote_service_DecodeService_BIND_ALLOW_OOM_MANAGEMENT
#define net_irext_remote_service_DecodeService_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef net_irext_remote_service_DecodeService_BIND_AUTO_CREATE
#define net_irext_remote_service_DecodeService_BIND_AUTO_CREATE 1L
#undef net_irext_remote_service_DecodeService_BIND_DEBUG_UNBIND
#define net_irext_remote_service_DecodeService_BIND_DEBUG_UNBIND 2L
#undef net_irext_remote_service_DecodeService_BIND_IMPORTANT
#define net_irext_remote_service_DecodeService_BIND_IMPORTANT 64L
#undef net_irext_remote_service_DecodeService_BIND_NOT_FOREGROUND
#define net_irext_remote_service_DecodeService_BIND_NOT_FOREGROUND 4L
#undef net_irext_remote_service_DecodeService_BIND_WAIVE_PRIORITY
#define net_irext_remote_service_DecodeService_BIND_WAIVE_PRIORITY 32L
#undef net_irext_remote_service_DecodeService_CONTEXT_IGNORE_SECURITY
#define net_irext_remote_service_DecodeService_CONTEXT_IGNORE_SECURITY 2L
#undef net_irext_remote_service_DecodeService_CONTEXT_INCLUDE_CODE
#define net_irext_remote_service_DecodeService_CONTEXT_INCLUDE_CODE 1L
#undef net_irext_remote_service_DecodeService_CONTEXT_RESTRICTED
#define net_irext_remote_service_DecodeService_CONTEXT_RESTRICTED 4L
#undef net_irext_remote_service_DecodeService_MODE_APPEND
#define net_irext_remote_service_DecodeService_MODE_APPEND 32768L
#undef net_irext_remote_service_DecodeService_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define net_irext_remote_service_DecodeService_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef net_irext_remote_service_DecodeService_MODE_MULTI_PROCESS
#define net_irext_remote_service_DecodeService_MODE_MULTI_PROCESS 4L
#undef net_irext_remote_service_DecodeService_MODE_PRIVATE
#define net_irext_remote_service_DecodeService_MODE_PRIVATE 0L
#undef net_irext_remote_service_DecodeService_MODE_WORLD_READABLE
#define net_irext_remote_service_DecodeService_MODE_WORLD_READABLE 1L
#undef net_irext_remote_service_DecodeService_MODE_WORLD_WRITEABLE
#define net_irext_remote_service_DecodeService_MODE_WORLD_WRITEABLE 2L
#undef net_irext_remote_service_DecodeService_START_CONTINUATION_MASK
#define net_irext_remote_service_DecodeService_START_CONTINUATION_MASK 15L
#undef net_irext_remote_service_DecodeService_START_FLAG_REDELIVERY
#define net_irext_remote_service_DecodeService_START_FLAG_REDELIVERY 1L
#undef net_irext_remote_service_DecodeService_START_FLAG_RETRY
#define net_irext_remote_service_DecodeService_START_FLAG_RETRY 2L
#undef net_irext_remote_service_DecodeService_START_NOT_STICKY
#define net_irext_remote_service_DecodeService_START_NOT_STICKY 2L
#undef net_irext_remote_service_DecodeService_START_REDELIVER_INTENT
#define net_irext_remote_service_DecodeService_START_REDELIVER_INTENT 3L
#undef net_irext_remote_service_DecodeService_START_STICKY
#define net_irext_remote_service_DecodeService_START_STICKY 1L
#undef net_irext_remote_service_DecodeService_START_STICKY_COMPATIBILITY
#define net_irext_remote_service_DecodeService_START_STICKY_COMPATIBILITY 0L
/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACLibOpen
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_net_irext_remote_service_DecodeService_irdaACLibOpen
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACControl
 * Signature: (Lcom/irext/remote/bean/jnibean/JNIACStatus;II)[I
 */
JNIEXPORT jintArray JNICALL Java_net_irext_remote_service_DecodeService_irdaACControl
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACLibClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_irext_remote_service_DecodeService_irdaACLibClose
  (JNIEnv *, jobject);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACGetTemperatureRange
 * Signature: (I)Lcom/irext/remote/bean/jnibean/JNITemperatureRange;
 */
JNIEXPORT jobject JNICALL Java_net_irext_remote_service_DecodeService_irdaACGetTemperatureRange
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACGetSupportedMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_irext_remote_service_DecodeService_irdaACGetSupportedMode
  (JNIEnv *, jobject);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACGetSupportedWindSpeed
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_irext_remote_service_DecodeService_irdaACGetSupportedWindSpeed
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACGetSupportedSwing
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_irext_remote_service_DecodeService_irdaACGetSupportedSwing
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaACGetSupportedWindDirection
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_irext_remote_service_DecodeService_irdaACGetSupportedWindDirection
  (JNIEnv *, jobject);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaTVLibOpen
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_net_irext_remote_service_DecodeService_irdaTVLibOpen
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaTVControl
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_net_irext_remote_service_DecodeService_irdaTVControl
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_irext_remote_service_DecodeService
 * Method:    irdaTVLibClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_irext_remote_service_DecodeService_irdaTVLibClose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_irext_remote_service_DecodeService_LocalBinder */

#ifndef _Included_net_irext_remote_service_DecodeService_LocalBinder
#define _Included_net_irext_remote_service_DecodeService_LocalBinder
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif