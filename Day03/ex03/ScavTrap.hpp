#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);
    ~ScavTrap();
    ScavTrap &  operator= (const ScavTrap &other);

    void    guardGate();
};

#endif