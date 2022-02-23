#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute), _is_signed(
		false)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::~Form()
{

}

Form::Form(const Form &other) : _name(other._name), _grade_sign(other._grade_sign), _grade_execute(other._grade_execute), _is_signed(other._is_signed)
{

}

Form &Form::operator =(const Form &other)
{
	_is_signed = other._is_signed;
	return (*this);
}

std::string		Form::getName()
{
	return (_name);
}

int 			Form::getGradeSign()
{
	return (_grade_sign);
}

int				Form::getGradeExecute()
{
	return (_grade_execute);
}

bool			Form::getIsSigned()
{
	return (_is_signed);
}

void	Form::beSigned(Bureaucrat &bureacrat)
{
	if (_is_signed != true) {

		if (bureacrat.getGrade() <= this->_grade_sign) {
			_is_signed = true;
			std::cout << _name << " has been signed" << std::endl;
		}
		else {
			throw Form::GradeTooLowException();
		}
	}
	else {
		std::cout << _name << " already signed" << std::endl;
	}
}

const char 	*Form::GradeTooHighException::what() const throw()
{
	return "Too high grade";
}

const char 	*Form::GradeTooLowException::what() const throw()
{
	return "Too low grade";
}

std::ostream &operator <<(std::ostream &out, Form &value)
{
	out << "Name: " << value.getName() << "\nGrade sign: " << value.getGradeSign() << "\nGrade execute: " << value.getGradeExecute() << "\nIs signed: " << value.getIsSigned();
	return (out);
}
