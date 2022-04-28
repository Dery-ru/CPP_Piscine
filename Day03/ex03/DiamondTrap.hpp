#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class	DiamondTrap: public FragTrap, public ScavTrap
{
	std::string	name;

public:

	DiamondTrap(void);
	DiamondTrap(std::string str);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap & operator=(const DiamondTrap &other);

	using ScavTrap::attack;

	void	whoAmI(void);
};

#endif