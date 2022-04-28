#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	type = "WrongCat";
    std::cout << "A WrongCat was created\n";
}

const   std::string &WrongCat::getType(void) const
{
    return (type);
}

void    WrongCat::makeSound(void) const
{
    std::cout << type << " says Wrong_miau\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat was destroyed\n";
}