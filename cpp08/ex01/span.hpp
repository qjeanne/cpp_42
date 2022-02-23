#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include "vector"

class span
{
private:
	unsigned int 		_n;
	std::vector<int>	vec;

	span(void);

public:
	span(unsigned int N);
	~span(void);
	span(span const &other);

	span &operator =(span const &other);

	void			addNumber(int n);
	void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	class myException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};


#endif
