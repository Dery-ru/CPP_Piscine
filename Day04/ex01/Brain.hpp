#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	std::string *ideas;
	Brain();
	Brain(const Brain &copy);
	Brain &operator= (const Brain &other);
	~Brain();

};

#endif