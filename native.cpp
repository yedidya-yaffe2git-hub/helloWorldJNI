//CPP

#include <jni.h>
#include <iostram>
#include "native.h"

JNIEXPORT void JNICALL Java_sandBridge_HelloWorldJNI_sayHello(JNIEnv* env, jobject thisObject) {
	std::cout << "Hello from C++ !" << std::endl;
}
JNIEXPORT jint JNICALL Java_sandBridge_HelloWorldJNI_add(JNIEnv* env, jobject thisObject, jint a, jint b) {
	return a+b;
}