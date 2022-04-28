# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "Unknown";
	this->hitPoints = 0;
	this->energyPoints = 0;
	this->damage = 0;
}

FragTrap::FragTrap(std::string str)
{
	this->name = str;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->damage = 30;
	std::cout << "FragTrap " << this->name << " is created" << std::endl; 
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is desstroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap & FragTrap::operator=(const FragTrap &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->damage = other.damage;
	
	return(*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me High Five!" << this->name << std::endl;
}