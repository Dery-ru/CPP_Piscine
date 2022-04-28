#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vector;
    std::vector<int>::iterator vIter;
    int n = 4;
    std::cout << "n: " << n << std::endl;
	srand(time(NULL));
    for (int i = 0; i < 10; ++i)
	{
		if (i < 4)
        	vector.push_back(i + 2);

	}
    for (vIter = vector.begin(); vIter != vector.end(); ++vIter)
        std::cout << *vIter << ' ';
    std::cout << std::endl;
    try
    {
        {
            vIter = easyfind(vector, n);
            std::cout << "I found: " << n << " in vector[" << vIter - vector.begin() << "]"  << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Not found" << '\n';
    }
    return 0;
}