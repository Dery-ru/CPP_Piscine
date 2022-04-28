#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    name = "Unknown";
    ClapTrap::name = name + "_clap_name";
    hitPoints = 0;
    energyPoints = 0;
    damage = 0;
    std::cout << "DiamondTrapp " << this->name << " was created\n";
}

DiamondTrap::DiamondTrap(std::string str) : FragTrap(str), ScavTrap(str)
{
    this->name = str;
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->damage = 30;
    std::cout << "DiamondTrapp " << this->name << " was created\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
}

DiamondTrap&  DiamondTrap::operator= (const DiamondTrap &other)
{
    if (&other == this)
        return (*this);
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->damage = other.damage;

    return(*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " was destroyed\n";
}