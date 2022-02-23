#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	protected:
		std::string		type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);

		WrongAnimal &operator =(const WrongAnimal &other);

		void	makeSound() const;
		std::string		getType() const;
};


#endif
