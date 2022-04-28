#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Unknown")
{
    std::cout << "WrongAnimal was created\n";
}

const   std::string &WrongAnimal::getType(void) const
{
    return (type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong sound\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal was destroyed\n";
}