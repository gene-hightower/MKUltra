/*
Copyright © 2016-2017 Gene Hightower <gene@digilicious.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 3.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  See the file LICENSE.  If not, see
<http://www.gnu.org/licenses/>.
*/

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
