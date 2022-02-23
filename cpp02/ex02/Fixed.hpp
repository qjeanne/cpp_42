#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include "iostream"
#include "cmath"

class Fixed
{
	private:
		int					_value;
		const static int	_bits;

	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(const Fixed &other);

		Fixed	&operator =(const Fixed &other);
		bool	operator >(Fixed const &other) const;
		bool	operator <(Fixed const &other) const;
		bool	operator >=(Fixed const &other) const;
		bool	operator <=(Fixed const &other) const;
		bool	operator ==(Fixed const &other) const;
		bool	operator !=(Fixed const &other) const;

		Fixed	operator +(Fixed const &other) const;
		Fixed	operator -(Fixed const &other) const;
		Fixed	operator *(Fixed const &other) const;
		Fixed	operator /(Fixed const &other) const;
		Fixed	&operator ++(void);
		Fixed	operator ++(int);
		Fixed	&operator --(void);
		Fixed	operator --(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed const &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);
};

std::ostream &operator <<(std::ostream &out, const Fixed &value);

#endif
