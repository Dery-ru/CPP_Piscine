#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon	&gun;
public:
	HumanA(std::string str, Weapon &weap);
	~HumanA();

	void	attack(void);
};

#endif