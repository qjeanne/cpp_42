#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << std::endl;

	wrong->makeSound();
	std::cout << std::endl;

	delete wrong;
    delete meta;
    delete j;
    delete i;
	return (0);
}
