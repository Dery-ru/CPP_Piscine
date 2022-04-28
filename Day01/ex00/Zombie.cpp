#include	"Zombie.hpp"

Zombie::Zombie (std::string str)
{
	name = str;
}

Zombie::~Zombie	(void)
{
	std::cout << name << " zombie died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " : Brainzzzzzzzzzz" << std::endl;
}