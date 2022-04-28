#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << " top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << " size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	// try
	// {
	// 	--it;
	// 	++ite;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "out_of_range" << '\n';
	// }
	

	while (it != ite)
	{
		std::cout << " iterated " << *it << std::endl;
		++it;
	}
	while (--ite >= mstack.begin())
	{
		std::cout << "iterated of end " << *ite << std::endl;
	}

	std::stack<int> s(mstack);
	return 0;
}