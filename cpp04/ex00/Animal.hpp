#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include "iostream"
#include "string"

class Animal
{
	protected:
		std::string		type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);

		Animal &operator =(const Animal &other);

		virtual void	makeSound() const;
		std::string		getType() const;
};


#endif
