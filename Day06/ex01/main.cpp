#include <iostream>

typedef struct s_data
{
	std::string string;
	int num;
}				Data;


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data A;
	Data *B;

	A.string = "hello world";
	A.num = 42;

	std::cout << B << std::endl;
	std::cout << "Data in A string :" << A.string << "\n\tnum :" << A.num << std::endl;
	std::cout << &A << std::endl;
	B = deserialize(serialize(&A));
	std::cout << "Data in B string :" << B->string << "\n\tnum :" << B->num << std::endl;
	
	std::cout << B << std::endl;
	return 0;
}