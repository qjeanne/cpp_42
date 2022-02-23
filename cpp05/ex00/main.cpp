#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Creating bob with grade 3" << std::endl;
	Bureaucrat bob("bob", 3);
	std::cout << bob << std::endl << std::endl;

	std::cout << "Creating jim with grade 0" << std::endl;
	try {
		Bureaucrat jim("jim", 0);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Creating joe with grade 151" << std::endl;
	try {
		Bureaucrat joe("joe", 151);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "Creating ali with grade 2 and then incrementing grade two times" << std::endl;
	Bureaucrat ali("ali", 2);
	std::cout << ali << std::endl;
	try {
		ali.increaseGrade();
		std::cout << ali << std::endl;
		ali.increaseGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}


	std::cout << "Creating pal with grade 149 and then decramanting grade two times" << std::endl;
	Bureaucrat pal("pal", 149);
	std::cout << pal << std::endl;
	try {
		pal.decreaseGrade();
		std::cout << pal << std::endl;
		pal.decreaseGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	return 0;
}
