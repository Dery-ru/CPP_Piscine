#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{
public:
	virtual ~A() {};
};

class B : public Base
{
public:
	virtual ~B() {};
};

class C : public Base
{
public:
	virtual ~C() {};
};

Base *generate(void)
{
	Base *base = NULL;
	srand(time(NULL));

	switch (rand() % 3)
	{
	case 0:
		base = new A;
		break;
	case 1:
		base = new B;
		break;
	case 2:
		base = new C;
		break;
	}
	return (base);
}
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "is A" << std::endl;
		std:: cout << p << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "is B" << std::endl;
		std:: cout << p << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "is C" << std::endl;
		std:: cout << p << std::endl;
	}
	else
	{
		std::cout << "bad cast" << std::endl;
		std:: cout << p << std::endl;
	}
}
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
		std::cout << &p << std::endl;
	}
	catch(std::bad_cast) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
		std::cout << &p << std::endl;
	}
	catch(std::bad_cast) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout <<  "C\n";
		std::cout << &p << std::endl;
	}
	catch(std::bad_cast) {}
}

int main(void)
{
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}