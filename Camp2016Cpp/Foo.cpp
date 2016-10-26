#include <iostream>
#include "Foo.h"

using namespace std;


// definitions
int Foo::s_i = 0;

Foo::Foo()
{
	cout << "Foo()" << endl;
}
Foo::~Foo()
{
	cout << "~Foo()" << endl;
}

void Foo::hello()
{
	cout << "Foo::hello()" << endl;
}

