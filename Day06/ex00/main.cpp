#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "Bad arument!" << std::endl;
		return 1;
	}
	try
	{
		char c = static_cast<char>(std::stoi(av[1]));
		if (isprint(c))
			std::cout << "char :'" << c << "'\n";
		else
			std::cout << "char : Not displayable\n";   
	}
	catch(const std::exception& e)
	{
		std::cerr << "impossible" << '\n';
	}
	try
	{
		int i = static_cast<int>(std::stoi(av[1]));
		std::cout << "int : " << i <<std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "impossible" << '\n';
	}
	try
	{
		float f = static_cast<float>(std::stof(av[1]));
		if (f == static_cast<int>(f))
			std::cout << "float : " << f << ".0f" << std::endl;
		else
			std::cout << "float : " << f << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "impossible" << '\n';
	}
	try
	{
		double d = static_cast<double>(std::stod(av[1]));
		if (d == static_cast<int>(d))
			std::cout << "double : " << d << ".0" << std::endl;
		else
			std::cout << "double : " << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "inpossible" << '\n';
	}
	return 0;
}