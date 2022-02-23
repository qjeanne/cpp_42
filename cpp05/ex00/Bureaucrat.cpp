#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{

}

Bureaucrat &Bureaucrat::operator =(const Bureaucrat &other)
{
	_grade = other._grade;
	return (*this);
}

std::string		Bureaucrat::getName()
{
	return (_name);
}

int 			Bureaucrat::getGrade()
{
	return (_grade);
}

std::ostream &operator <<(std::ostream &out, Bureaucrat &value)
{
	out << value.getName() << ", bureaucrat grade " << value.getGrade();
	return (out);
}

const char 		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too high grade";
}

const char 		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too low grade";
}

void			Bureaucrat::decreaseGrade()
{
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void 			Bureaucrat::increaseGrade()
{
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}
