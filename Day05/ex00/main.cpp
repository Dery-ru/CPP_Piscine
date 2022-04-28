#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	a("first", 100);
	Bureaucrat	b("second", 20);

	std::cout << a << std::endl;
	++a;
	std::cout << a << std::endl;
	--a;
	--a;
	--a;
	--a;
	std::cout << a << std::endl;
	std::cout << "-------------------------------------------\n";
	try
	{
		Bureaucrat c;
		std::cout << c << std::endl;
		--c;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------\n";
	try
	{
		Bureaucrat d("third", 1);
		std::cout << d << std::endl;
		++d;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------\n";
	try
	{
		Bureaucrat f("four", 200);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}