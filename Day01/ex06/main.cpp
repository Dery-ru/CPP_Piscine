#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen   kek;

	if (argc != 2)
	{
		std::cout << "no valid parameter" << std::endl << std::endl;
		return (1);
	}
    kek.complain(argv[1]);
    std::cout << std::endl;
}