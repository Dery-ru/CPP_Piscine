#include "Animal.hpp"

Animal::Animal(void) : type("Unknown")
{
    std::cout << "Animal was created\n";
}

Animal::Animal(const std::string name) : type(name)
{
    std::cout << "Animal was created\n";
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal&  Animal::operator= (const Animal &other)
{
    this->type = other.type;
    return (*this);
}

const   std::string &Animal::getType(void) const
{
    return (type);
}

void    Animal::makeSound(void) const
{
    std::cout << type << " says nothing\n";
}

Animal::~Animal()
{
    std::cout << "Animal was destroyed\n";
}