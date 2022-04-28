#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int damage;
public:
	ClapTrap(void);
	ClapTrap(std::string str);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif