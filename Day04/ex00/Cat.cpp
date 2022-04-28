#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "A Cat was created\n";
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
}

Cat&  Cat::operator= (const Cat &other)
{
    this->type = other.type;
    return (*this);
}

const   std::string &Cat::getType(void) const
{
    return (type);
}

void    Cat::makeSound(void) const
{
    std::cout << type << " says meow\n";
}

Cat::~Cat()
{
    std::cout << "Cat was destroyed\n";
}
