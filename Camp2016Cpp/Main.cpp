#include <iostream>
#include <memory>

#include <string>
#include <vector> // analogous to List
#include <algorithm>

#include "Foo.h"
#include "Quux.h"


using namespace std;


int main(int argc, char *argv[])
{

	Foo foo;
	foo.hello();
	frobnicate(foo);
	return 0;
}
