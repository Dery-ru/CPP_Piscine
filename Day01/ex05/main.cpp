#include "Karen.hpp"

int main()
{
	Karen   kek;

	kek.complain("DEBUG");
    std::cout << std::endl;
    kek.complain("INFO");
    std::cout << std::endl;
    kek.complain("WARNING");
    std::cout << std::endl;
    kek.complain("ERROR");
    std::cout << std::endl;
    kek.complain("kek");
    std::cout << std::endl;
}