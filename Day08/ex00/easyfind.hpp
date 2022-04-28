#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	std::vector<int>::iterator   iter;
    iter = find(container.begin(), container.end(), n);
    if (iter != container.end())
        return iter;
    throw std::exception();
}

#endif