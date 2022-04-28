#include "Span.hpp"

Span::Span(unsigned int _N)
{
	vec.reserve(_N);
}

Span::~Span(){}

int Span::shortestSpan()
{
    int span;

    if (vec.size() < 2)
        throw SpanIsShort();
    for (std::vector<int>::iterator i = vec.begin(); i + 1 < vec.end(); i++)
	{
		if (i == vec.begin())
			span = abs(*(i + 1) - *i);
		for (std::vector<int>::iterator j = i + 1; j != vec.end(); j++)
		{
        	if (span > abs(*j - *i))
				span = abs(*j - *i);
		}
	}
    return span;
}

int Span::longestSpan()
{
    if (vec.size() < 2)
        throw SpanIsShort();
    int a = *max_element(vec.begin(), vec.end());
    int b = *min_element(vec.begin(), vec.end());
    return a - b;
}

std::vector<int>     Span::getArray() const
{
    return this->vec;
}

void    Span::addNumber(int number)
{
    if (vec.size() >= vec.capacity())
        throw SpanIsFull();
    vec.push_back(number);
}

void    Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    size_t  dst = std::distance(start, end);
    if (dst > vec.capacity())
        throw std::out_of_range("Out of range!");
    vec.insert(vec.begin(), start, end);
}

const char *Span::SpanIsFull::what() const throw()
{
    return "Span is full!";
}

const char *Span::SpanIsShort::what() const throw()
{
    return "Span is too short!";
}

// std::ostream &operator<<(std::ostream &out, const Span &sp)
// {
// 	out << sp.getArray();
// 	return out;
// }