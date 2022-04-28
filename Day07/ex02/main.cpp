#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    Array<int> tmp = numbers;
	Array<int> test(tmp);

	std::cout << "-----equal check-----" << std::endl;
	numbers.arr[0] = 150;
	std::cout << "numbers arr[0] = " << numbers.arr[0] << std::endl;
	std::cout << "tmp arr[0] = " << tmp.arr[0] << std::endl;
	std::cout << "test arr[0] = " << test.arr[0] << std::endl;
	tmp.arr[0] = 510;
	std::cout << "tmp arr[0] = " << tmp.arr[0] << std::endl;
	std::cout << "test arr[0] = " << test.arr[0] << std::endl;

	std::cout << test.size() << std::endl;

	std::cout << "-----test-----" << std::endl;
	for(int i = 0 ; i < 10; i++)
	{
		std::cout << "test arr["<< i<< "] = " << test.arr[i] << std::endl;
	}
	std::cout << "-----tmp-----" << std::endl;
	for(int i = 0 ; i < 10; i++)
	{
		std::cout << "tmp arr["<< i<< "] = " << tmp.arr[i] << std::endl;
	}
	std::cout << "-----numbers-----" << std::endl;
	for(int i = 0 ; i < 10; i++)
	{
		std::cout << "numbers arr["<< i<< "] = " << numbers.arr[i] << std::endl;
	}

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}