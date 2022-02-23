#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include "iostream"

class Fixed
{
	private:
		int					_value;
		const static int	_bits;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &other);

		Fixed &operator =(const Fixed &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};


#endif
