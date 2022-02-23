#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type = other.type;
	std::cout << "Dog copy destructor called" << std::endl;
}

void		Dog::makeSound() const
{
	std::cout << "Woof-woof" << std::endl;
}

Dog &Dog::operator =(const Dog &other)
{
	Animal::operator =(other);
	type = other.type;
	std::cout << "Dog operator = called" << std::endl;
	return (*this);
}
