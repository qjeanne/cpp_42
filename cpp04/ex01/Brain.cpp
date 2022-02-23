#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	delete [] ideas;
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	int		i = 0;

	ideas = new std::string[100];
	while (i < 100)
	{
		ideas[i] = other.ideas[i];
		i++;
	}
	std::cout << "Brain copy destructor called" << std::endl;
}

Brain &Brain::operator =(const Brain &other)
{
	int		i = 0;

	while (i < 100)
	{
		ideas[i] = other.ideas[i];
		i++;
	}
	std::cout << "Brain operator = called" << std::endl;
	return (*this);
}
