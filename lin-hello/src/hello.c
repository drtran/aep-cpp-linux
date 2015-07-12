/*
 * hello.c
 *
 *  Created on: Jul 11, 2015
 *      Author: ktran
 */

#include <jni.h>
#include <stdio.h>
#include "com_bemach_examples_jni_SayHelloJni.h"

JNIEXPORT jstring JNICALL Java_com_bemach_examples_jni_SayHelloJni_sayHello
  (JNIEnv *env, jobject thisObj, jstring name) {
	printf ("Here ..>!");
	char *buf = (char*) malloc(100);
	const char *nameStr = (*env)->GetStringUTFChars(env, name, 0);
	strcpy(buf, "Hello, ");
	strcat(buf, nameStr);
	strcat(buf, "!");

	printf ("Here .. 2 !");
	return (*env)->NewStringUTF(env,buf);
}
