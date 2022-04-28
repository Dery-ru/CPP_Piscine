#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weap) : gun(weap)
{
	this->name = str;
}

HumanA::~HumanA(void)
{}

void	HumanA::attack(void)
{
	std::cout << this->name << " attack with his ";
	std::cout << this->gun.getType() << std::endl;
}