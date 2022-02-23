#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	type = other.type;
	std::cout << "Cat copy destructor called" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat &Cat::operator =(const Cat &other)
{
	Animal::operator =(other);
	type = other.type;
	std::cout << "Cat operator = called" << std::endl;
	return (*this);
}
