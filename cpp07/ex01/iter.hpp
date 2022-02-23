#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template <typename T>
void	iter(T *array, unsigned int size, void (*func)(T const &))
{
	unsigned int	i = 0;

	while (i < size)
		func(array[i++]);
}

#endif
