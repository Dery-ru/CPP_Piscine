#include "iter.hpp"

template <typename T>
void print(T &el)
{
	std::cout << el << std::endl;
}

int main( void ) {

	int arr[5] = {1, 2, 3, 4, 5};
	std::string srr[3] = {"lol", "kek", "chebureck"};
	::iter(arr, 5, print);
	::iter(srr, 3, print);


	return 0;
}