#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	type = other.type;
	std::cout << "WrongCat copy destructor called" << std::endl;
}

void		WrongCat::makeSound() const
{
	std::cout << "WrongMeow" << std::endl;
}

WrongCat &WrongCat::operator =(const WrongCat &other)
{
	WrongAnimal::operator =(other);
	type = other.type;
	std::cout << "WrongCat operator = called" << std::endl;
	return (*this);
}
