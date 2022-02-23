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

		Fixed &operator =(const Fixed &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
};

std::ostream &operator <<(std::ostream &out, const Fixed &value);

#endif
