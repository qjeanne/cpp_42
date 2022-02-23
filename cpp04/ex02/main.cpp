#include "Dog.hpp"
#include "Cat.hpp"

void	test_deep(Dog basic)
{
	std::cout << "----------Concrete Brain----------" << std::endl;

	Dog tmp = basic;
	Dog tmp2(basic);
	std::cout << std::endl;

	std::cout << "tmp brain: " << tmp.returnBrain() << std::endl;
	std::cout << "tmp2 brain: " << tmp2.returnBrain() << std::endl;
	std::cout << "basic brain: " << basic.returnBrain() << std::endl;
	std::cout << std::endl;
}

int main()
{
	const Animal*	array[4];
	int				i = 0;

	while (i < 2)
	{
		std::cout << i << " dog" << std::endl;
		array[i++] = new Dog();
	}
	while (i < 4)
	{
		std::cout << i << " cat" << std::endl;
		array[i++] = new Cat();
	}
	std::cout << std::endl;

	Dog	basic;
	std::cout << std::endl;
	test_deep(basic);
	std::cout << "----------------------------------" << std::endl;

	i = 0;
	while (i < 4)
	{
		std::cout << i << std::endl;
		delete array[i++];
	}
	std::cout << std::endl;
	return (0);
}
