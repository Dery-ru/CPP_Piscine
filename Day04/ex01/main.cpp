#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "-------------------------------------------\n";
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "-------------------------------------------\n";
	delete j;//should not create a leak
	delete i;
	std::cout << "-------------------------------------------\n";
	const Animal	*(Array[4]);
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			Array[i] = new Dog();
		else
			Array[i] = new Cat();
		std::cout << "-------------------------------------------\n";
	}
	for (int i = 0; i < 4; i++)
	{
		delete Array[i];
		std::cout << "-------------------------------------------\n";
	}
	// Dog *A = new Dog();
	// Dog *B = new Dog();
	// std::cout << static_cast<void*>(A->getBrain()) << std::endl;
	// std::cout << static_cast<void*>(B->getBrain()) << std::endl;
	// *A = *B;
	// std::cout << static_cast<void*>(A->getBrain()) << std::endl;
	// std::cout << static_cast<void*>(B->getBrain()) << std::endl;
	// delete A;
	// // delete B;
	std::cout << "-------------------------------------------\n";
	system("leaks Brain");
	return 0;
}