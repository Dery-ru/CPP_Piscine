#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	name = "Unknown";
	hitPoints = 0;
	energyPoints = 0;
	damage = 0;
}

ClapTrap::ClapTrap(std::string str) : hitPoints(10), energyPoints(10), damage(0)
{
	name = str;
	std::cout << "ClapTrap " << this->name << " is created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " is destroyed" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->damage = other.damage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;

	return(*this);
}

void	ClapTrap::attack(std::string const & target)
{
	  if (energyPoints <= 0)
    {
        std::cout << "No Energy to attack" << std::endl;
        return ;
    }
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attack " << target << " causing ";
	std::cout << this->damage << std::endl;
	std::cout << "Amount of energy points after: " << this->energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << "already dead";
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " take " << amount << " amount damage !" << std::endl;
	if (this->hitPoints <= 0)
		std::cout << this->name << "is dead" << std::endl;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << "already dead";
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "Not enough energy for " << this->name;
		std::cout << " to be repaired" << std::endl;
	}
	this->energyPoints -= 1;
	this->hitPoints += amount;
	std::cout << "ClapTrap is being repaired by " << amount;
	std::cout << " amount of hitPoints" << std::endl;
	std::cout << "Amount of energy points after: " << this->energyPoints << std::endl;
}