#include "Zombie.hpp"

int	main(){
	int n = 10;

	Zombie *gang = zombieHorde(n, "Name");
	for(int i = 0; i < n; i++)
		gang[i].announce();

	delete [] gang;
}