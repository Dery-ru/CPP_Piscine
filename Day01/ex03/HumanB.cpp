#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->gun = NULL;
}

HumanB::~HumanB(void)
{}

void	HumanB::setWeapon(Weapon &weap)
{
	this->gun = &weap;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attack with his ";
	if (!this->gun)
		std::cout << "arms😂" << std::endl;
	else
		std::cout << this->gun->getType() << std::endl;
}
