#include	"Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *newMorose = new Zombie(name);

	return (newMorose);
}
