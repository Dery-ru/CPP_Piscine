#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	*gun;
public:
	HumanB(std::string str);
	~HumanB();

	void	setWeapon(Weapon &weap);
	void	attack(void);
};

#endif