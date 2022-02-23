#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array() : _size(0) { _array = new T[0]; };
		Array(unsigned int n) : _size(n) { _array = new T[n]; };
		~Array() { delete [] _array; };
		Array(Array const &other) : _size(other._size)
		{
			int		i = 0;
			_array = new T[other.size()];
			while (i < other.size())
			{
				_array[i] = other._array[i];
				i++;
			}
		};

		Array &operator =(Array const &other)
		{
			int		i = 0;
			delete [] _array;
			_array = new T[other.size()];
			while (i < other.size())
			{
				_array[i] = other._array[i];
				i++;
			}
			_size = other._size;
			return (*this);
		};

		class exception : public std::exception
		{
			public:
			const char 	*what() const throw() { return "Out of range"; };
		};
		int &operator [](int n)
		{
			if (n >= _size || n < 0)
				throw exception();
			return (_array[n]);
		}

		int	&operator [](const int n) const
		{
			if (n >= _size || n < 0)
				throw exception();
			return (_array[n]);
		}

		unsigned int	size() const { return _size; };
};


#endif
