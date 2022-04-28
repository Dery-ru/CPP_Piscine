#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea";
	std::cout << "Brain was created\n";
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain was copied\n";
}

Brain &Brain::operator= (const Brain &other)
{
	if (this != &other)
		for (int i = 0; i < 100 ; i++)
			ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	delete[]ideas;
	std::cout << "Brain was destroyed\n";
}
