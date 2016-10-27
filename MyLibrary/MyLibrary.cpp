#include <iostream>
#include "MyLibrary.h"

using namespace std;

MyClass::MyClass()
{
	cout << "MyClass()" << endl;
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
