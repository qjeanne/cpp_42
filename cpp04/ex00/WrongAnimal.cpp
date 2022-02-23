#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "WrongAnimal copy destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &other)
{
	type = other.type;
	std::cout << "WrongAnimal operator = called" << std::endl;
	return (*this);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal's sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
