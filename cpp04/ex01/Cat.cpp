#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	brain = new Brain();
	*brain = *other.brain;
	type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

void		Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat &Cat::operator =(const Cat &other)
{
	Animal::operator =(other);
	*brain = *other.brain;
	std::cout << "Cat operator = called" << std::endl;
	return (*this);
}
