#pragma once

#include <string>
#include "MyLibrary_ExportDefines.h"


class MYLIBRARY_EXPORT MyClass
{
	std::string name;
public:
	MyClass();
	~MyClass();
	int hello(int x);
	const char* getName();
};

extern "C" // prevent name mangling
{
	MYLIBRARY_EXPORT void mylib_hello(int number);

#ifdef MYLIBRARY_DLL
#define MYCLASS_RETURN MyClass
#else
#define MYCLASS_RETURN void
#endif

	MYLIBRARY_EXPORT MYCLASS_RETURN* mylib_MyClass_create();
	MYLIBRARY_EXPORT void mylib_MyClass_destroy(MYCLASS_RETURN *object);
	MYLIBRARY_EXPORT int mylib_MyClass_hello(MYCLASS_RETURN *object, int x);
	MYLIBRARY_EXPORT const char* mylib_MyClass_getName(MYCLASS_RETURN *object);
}
