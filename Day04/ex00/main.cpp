#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    std::cout << "-------------------------------------------\n";
    const Animal* j = new Dog();
    std::cout << "-------------------------------------------\n";
    const Animal* i = new Cat();
    std::cout << "-------------------------------------------\n";
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w = new WrongCat();
    std::cout << "-------------------------------------------\n";
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
	std::cout << w_meta->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
    std::cout << "-------------------------------------------\n";
    meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
	w_meta->makeSound();
	w->makeSound();
	std::cout << "-------------------------------------------\n";
    delete meta;
    delete j;
    delete i;
	delete w_meta;
	delete w;
    return 0;
}