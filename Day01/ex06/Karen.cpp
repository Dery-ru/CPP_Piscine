#include "Karen.hpp"

Karen::Karen(void)
{
	this->debugPtr = &Karen::debug;
	this->errorPtr = &Karen::error;
	this->infoPtr = &Karen::info;
	this->warningPtr = &Karen::warning;

}

Karen::~Karen(void)
{}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

int		Karen::returnIndex(std::string level)
{
	int i;
	std::string lvl[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	for(i = 0; level != lvl[i] && i < 4; i++);
	return(i);
}

void	Karen::complain(std::string level)
{
	switch (returnIndex(level))
	{
		case 0:
				(this->*debugPtr)();
			
		case 1:
				(this->*errorPtr)();

		case 2:
				(this->*infoPtr)();

		case 3:
				(this->*warningPtr)();
		
		break;
		
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}