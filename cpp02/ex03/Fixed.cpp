#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const int value)
{
	_value = value << _bits; //почему
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits)); //почему
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator =(const Fixed &other)
{
	_value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> _bits); //почему
}

float	Fixed::toFloat(void) const
{
	return (float(_value) / (1 << _bits)); //почему
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
	if (f1 < f2)
		return (f1);
	return (f2);
}

bool Fixed::operator >(Fixed const &other) const
{
	return (this->_value < other._value);
}

bool Fixed::operator <(Fixed const &other) const
{
	return (this->_value > other._value);
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
