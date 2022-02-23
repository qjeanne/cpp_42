#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_execute, std::string target) : _name(name),
			_grade_sign(grade_sign), _grade_execute(grade_execute),
			_is_signed(false), _target(target)
{
}

Form::~Form()
{

}

Form::Form(const Form &other) : _name(other._name), _grade_sign(other._grade_sign),
								_grade_execute(other._grade_execute),
								_is_signed(other._is_signed), _target(other._target)
{
}

Form &Form::operator =(const Form &other)
{
	_is_signed = other._is_signed;
	return (*this);
}

std::string		Form::getName() const
{
	return (_name);
}

std::string		Form::getTarget() const
{
	return (_target);
}

int 			Form::getGradeSign() const
{
	return (_grade_sign);
}

int				Form::getGradeExecute() const
{
	return (_grade_execute);
}

bool			Form::getIsSigned() const
{
	return (_is_signed);
}

void			Form::setIsSigned(bool state)
{
	_is_signed = state;
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
	out << "Name: " << value.getName() << "\nGrade sign: " << value.getGradeSign() << "\nGrade execute: " << value.getGradeExecute() << "\nIs signed: " << value.getIsSigned() << std::endl;
	return (out);
}
