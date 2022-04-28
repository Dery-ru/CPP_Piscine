#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0 || N > 2147483647){
		std::cout << "Error with the number, try again" << std::endl;
		exit(EXIT_FAILURE);
	}

	Zombie *gang = new Zombie[N];

	for( int i = 0; i < N; i++)
		gang[i].setName(name);

	return(gang);
}