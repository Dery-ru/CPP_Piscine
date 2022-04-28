# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "Unknown";
	this->hitPoints = 0;
	this->energyPoints = 0;
	this->damage = 0;
}

ScavTrap::ScavTrap(std::string str)
{
	this->name = str;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->damage = 20;
	std::cout << "ScavTrap " << this->name << " is created" << std::endl; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is desstroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->damage = other.damage;
	
	return(*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}