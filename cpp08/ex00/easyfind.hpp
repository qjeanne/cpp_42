#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

struct MyException : public std::exception
{
	const char * what () const throw () { return "Not found"; }
};

template <typename T>
typename T::iterator easyFind(T t, int i)
{
	typename T::iterator	it = t.end();

	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw MyException();
	return (it);
}

#endif
