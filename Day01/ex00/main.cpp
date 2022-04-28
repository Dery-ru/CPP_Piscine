#include "Zombie.hpp"

int main()
{
	Zombie dead("lol");
	Zombie *man;

	dead.announce();

	man = newZombie("kek");
	man->announce();

	randomChump("chebureck");

	delete man;
}