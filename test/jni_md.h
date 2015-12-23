#ifndef _JAVASOFT_JNI_MD_H_
#define _JAVASOFT_JNI_MD_H_

#include <cstdint>

typedef int32_t jint;
typedef int64_t jlong;
typedef signed char jbyte;

#ifdef __WIN32__
#define JNIEXPORT __declspec(dllexport)
#define JNIIMPORT __declspec(dllimport)
#define JNICALL __stdcall
#endif // __WIN32__

#ifdef __APPLE__
#define JNIEXPORT __attribute__((visibility("default")))
#define JNIIMPORT
#define JNICALL
#endif // __APPLE__

#ifdef __linux__
#ifndef __has_attribute
#define __has_attribute(x) 0
#endif

#if (defined(__GNUC__) && ((__GNUC__ > 4) || (__GNUC__ == 4) && (__GNUC_MINOR__ > 2))) || __has_attribute(visibility)
#define JNIEXPORT __attribute__((visibility("default")))
#define JNIIMPORT __attribute__((visibility("default")))
#else
#define JNIEXPORT
#define JNIIMPORT
#endif

#define JNICALL
#endif //  __linux__

#endif // _JAVASOFT_JNI_MD_H_
