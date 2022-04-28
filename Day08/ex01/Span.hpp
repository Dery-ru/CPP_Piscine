#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span : public std::vector<int>
{
private:
public:
	std::vector<int>	vec;
	Span(unsigned int _N);
	~Span();

	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();

	std::vector<int>     getArray() const;
	
	std::vector<int>	getArr() const;
	class SpanIsFull : public std::exception
	{
		virtual const char *what() const throw ();
	};
	class SpanIsShort : public std::exception
	{
		virtual const char *what() const throw ();
	};
	void    addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

};

std::ostream &operator<< (std::ostream &out, const Span &span);


#endif