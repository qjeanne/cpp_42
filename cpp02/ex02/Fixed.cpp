#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void)
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = value << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destrutor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator =(const Fixed &other)
{
	std::cout << "Assignation operation called" << std::endl;
	_value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> _bits);
}

float	Fixed::toFloat(void) const
{
	return (float(_value) / (1 << _bits));
}

std::ostream &operator <<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

bool Fixed::operator >(Fixed const &other) const
{
	return (this->_value > other._value);
}

bool Fixed::operator <(Fixed const &other) const
{
	return (this->_value < other._value);
}

bool Fixed::operator >=(Fixed const &other) const
{
	return (this->_value >= other._value);
}

bool Fixed::operator <=(Fixed const &other) const
{
	return (this->_value <= other._value);
}

bool Fixed::operator ==(Fixed const &other) const
{
	return (this->_value == other._value);
}

bool Fixed::operator !=(Fixed const &other) const
{
	return (this->_value != other._value);
}

Fixed Fixed::operator +(Fixed const &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator -(Fixed const &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator *(Fixed const &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator /(Fixed const &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator ++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator ++(int)
{
	Fixed	f(*this);

	this->_value++;
	return (f);
}

Fixed &Fixed::operator --(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator --(int)
{
	Fixed	f(*this);

	this->_value--;
	return (f);
}
