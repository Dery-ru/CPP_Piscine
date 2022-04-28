#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "A Dog was created\n";
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
}

Dog&  Dog::operator= (const Dog &other)
{
    this->type = other.type;
    return (*this);
}

const   std::string &Dog::getType(void) const
{
    return (type);
}

void    Dog::makeSound(void) const
{
    std::cout << type << " says gav\n";
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

Dog::~Dog()
{
    std::cout << "Dog was destroyed\n";
}
