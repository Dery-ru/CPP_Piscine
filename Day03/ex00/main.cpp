#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	warrior("Warrior");

	warrior.attack("Enemy");
	warrior.takeDamage(3);
	warrior.beRepaired(4);
}