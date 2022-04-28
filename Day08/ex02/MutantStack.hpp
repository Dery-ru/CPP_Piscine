#include <algorithm>
#include <iostream>
#include <stack>
#include <iterator>

template < typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack(): std::stack<T>() {};
	MutantStack(const MutantStack<T> &copy): std::stack<T>(copy){};
	MutantStack const &operator=(const MutantStack<T> &other)
	{
		if (this == &other)
			return *this;
		std::stack<T>::operator=(other);
		return *this;
	}

	virtual ~MutantStack() {};

    typedef typename std::stack<T>::container_type::iterator	iterator;

    iterator begin() { return this->c.begin(); };

    iterator end() { return this->c.end(); };
};
