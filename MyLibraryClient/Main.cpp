#include "MyLibrary.h"

class MyClassWrapper
{
	void *object;
public:
	MyClassWrapper()
		: object(mylib_MyClass_create())
	{
	}
	~MyClassWrapper()
	{
		mylib_MyClass_destroy(object);
	}
	int hello(int x)
	{
		return mylib_MyClass_hello(object, x);
	}
};

int main()
{
	mylib_hello(123);
	MyClassWrapper c;
	c.hello(111);
	return 0;
}