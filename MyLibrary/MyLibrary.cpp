#include <iostream>
#include "MyLibrary.h"

using namespace std;

MyClass::MyClass()
{
	cout << "MyClass()" << endl;
	this->name = "MyClass";
}

MyClass::~MyClass()
{
	cout << "~MyClass()" << endl;
}

int MyClass::hello(int x)
{
	int res = x * 2;
	cout << "MyClass::hello(" << x << ") => " << res << endl;
	return res;
}

const char* MyClass::getName()
{
	return this->name.c_str();
}

void mylib_hello(int number)
{
	cout << "MyLib Hello, " << number << endl;
}

MyClass* mylib_MyClass_create()
{
	return new MyClass;
}
void mylib_MyClass_destroy(MyClass *object)
{
	delete object;
}
int mylib_MyClass_hello(MyClass *object, int x)
{
	return object->hello(x);
}
const char* mylib_MyClass_getName(MyClass *object)
{
	return object->getName();
}
