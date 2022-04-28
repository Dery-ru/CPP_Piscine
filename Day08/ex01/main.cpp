#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "sp "<< sp.shortestSpan() << std::endl;
	std::cout << "sp " << sp.longestSpan() << std::endl;

	Span span0 = Span(10000);
	for(int i = 0; i < 10000; i++)
	{
		if(i%2 == 0)
			span0.addNumber(i*1000);
		else if(i%3 == 0)
			span0.addNumber(i * 500);
		else
			span0.addNumber(i);
	}
	std::cout << "min = " << span0.shortestSpan() << std::endl;
	std::cout << "max = " << span0.longestSpan() << std::endl;

	Span span1(5);

	span1.addNumber(sp.vec.begin(), sp.vec.end());
	
	std::cout << span1.shortestSpan() << std::endl;
	std::cout << span1.longestSpan() << std::endl;

	Span span2(sp);
	std::cout << "span2 short == " << span2.shortestSpan() << std::endl;
	std::cout << "span2 long == " << span2.longestSpan() << std::endl;
	std::cout << "sp short == " << sp.shortestSpan() << std::endl;
	std::cout << "sp long == " << sp.longestSpan() << std::endl;

	system("leaks span");
	return 0;
}