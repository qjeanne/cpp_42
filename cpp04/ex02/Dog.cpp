#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	brain = new Brain();
	*brain = *other.brain;
	type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

void		Dog::makeSound() const
{
	std::cout << "Woof-woof" << std::endl;
}

Dog &Dog::operator =(const Dog &other)
{
	Animal::operator =(other);
	type = other.type;
	*brain = *other.brain;
	std::cout << "Dog operator = called" << std::endl;
	return (*this);
}

Brain	*Dog::returnBrain() const
{
	return (brain);
}
