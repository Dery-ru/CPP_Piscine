#include "ScavTrap.hpp"

int main()
{
	ScavTrap Robot("Robot");
	std::cout << std::endl;
	ClapTrap Lol("Lol");
	std::cout << std::endl;
	ClapTrap Kek("Kek");
	std::cout << std::endl;
	Kek.attack("Robot");
	Robot.takeDamage(0);
	Robot.beRepaired(10);
	std::cout << std::endl;
	Lol.attack("Robot");
	Robot.takeDamage(0);
	Robot.beRepaired(10);
	std::cout << std::endl;
	Robot.attack("Kek");
	Kek.takeDamage(20);
	Kek.beRepaired(5);
	Robot.guardGate();

	return (0);
}