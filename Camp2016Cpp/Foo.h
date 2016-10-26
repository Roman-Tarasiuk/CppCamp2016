#pragma once
#ifndef FOO_H__INCLUDED
#define FOO_H__INCLUDED

class Brill;

class Foo
{
	static int s_i;
	Brill *m_brill;

public:
	Foo();
	~Foo();
	void hello();
};

#endif
