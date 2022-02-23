#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Creating bob with grade 15" << std::endl;
	Bureaucrat bob("bob", 15);
	std::cout << bob << std::endl << std::endl;

	std::cout << "creating form 01 with grade_sign 151" << std::endl;
	try {
		Form a01("a01", 151, 20);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating ali with grade 2 and then incrementing grade" << std::endl;
	Bureaucrat ali("ali", 2);
	std::cout << ali << std::endl;
	try {
		ali.increaseGrade();
		std::cout << ali << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << std::endl;

	std::cout << "creating form with params" << std::endl;
	Form a02("a02", 10, 20);
	std::cout << a02 << std::endl;

	std::cout << "signing form 02 by ali" << std::endl;
	a02.beSigned(ali);
	std::cout << std::endl;

	std::cout << "signing form 02 by ali" << std::endl;
	a02.beSigned(ali);
	std::cout << std::endl;

	std::cout << "creating form with params" << std::endl;
	Form a03("a03", 10, 20);
	std::cout << a03 << std::endl;

	std::cout << "signing form 03 by bob" << std::endl;
	try {
		a03.beSigned(bob);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
