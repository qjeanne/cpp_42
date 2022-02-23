#include "Animal.hpp"

Animal::Animal() : type("None")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator =(const Animal &other)
{
	type = other.type;
	std::cout << "Animal operator = called" << std::endl;
	return (*this);
}

void		Animal::makeSound() const
{
	std::cout << "Animal's sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
