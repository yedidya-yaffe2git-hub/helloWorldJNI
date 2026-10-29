//H

#ifndef jni_for_sandBridge_HelloWorldJNI
#define jni_for_sandBridge_HelloWorldJNI

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_sandBridge_HelloWorldJNI_sayHello(JNIEnv*, jobject);
JNIEXPORT jint JNICALL Java_sandBridge_HelloWorldJNI_add(JNIEnv*, jobject, jint, jint);

#ifdef __cplusplus
}
#endif

#endif
