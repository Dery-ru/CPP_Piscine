#include	"Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << name << " zombie died" << std::endl;
}

void	Zombie::setName(std::string str)
{
	this->name = str;
}

void	Zombie::announce(void)
{
	std::cout << name << " ";
	std::cout << "Brainzzzzzzzzzz" << std::endl;
}