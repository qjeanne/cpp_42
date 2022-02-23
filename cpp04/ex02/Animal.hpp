#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include "iostream"
#include "string"
#include "Brain.hpp"

class Animal
{
	protected:
		std::string		type;
		Animal();

	public:
		virtual ~Animal();
		Animal(const Animal &other);

		Animal &operator =(const Animal &other);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
};


#endif
