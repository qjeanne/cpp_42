#include "span.hpp"

span::span(unsigned int N) : _n(N)
{
}

span::~span(void)
{
}

span::span(span const &other) : _n(other._n)
{
	*this = other;
}

span &span::operator =(span const &other)
{
	int		i = 0;

	_n = other._n;
	vec.resize(_n);
	while (i < _n)
	{
		vec[i] = other.vec[i];
		i++;
	}
	return *this;
}

void			span::addNumber(int n)
{
	if (vec.size() < _n)
		vec.push_back(n);
	else
		throw myException();
}

void			span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (end - begin <= _n)
		std::copy(begin, end, std::back_inserter(vec));
	else
		throw myException();
}

unsigned int	span::shortestSpan(void)
{
	int			i = -1;

	std::sort(vec.begin(), vec.end());
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (iter != vec.begin() && (i == -1 || abs(*(iter - 1) - *iter) < i))
			i = abs(*(iter - 1) - *iter);
	}
	if (i == -1)
		throw myException();
	return (i);
}

unsigned int	span::longestSpan(void)
{
	if (vec.begin() == vec.end() || vec.begin() + 1 == vec.end())
		throw myException();
	return (*(std::max_element(vec.begin(), vec.end())) - *(std::min_element(vec.begin(), vec.end())));
}

const char	*span::myException::what() const throw()
{
	return "Exception";
}
