#include <iostream>
#include "cmath"

int		is_int(char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int		is_nan(char *str)
{
	if (str[0] == 'n' && str[1] == 'a' && str[2] == 'n' && str[3] == '\0')
		return (1);
	if (str[0] == '-' && str[1] == 'i' && str[2] == 'n' && str[3] == 'f' && str[4] == '\0')
		return (1);
	if (str[0] == '+' && str[1] == 'i' && str[2] == 'n' && str[3] == 'f' && str[4] == '\0')
		return (1);
	return (0);
}

int		is_float(char *str)
{
	float	f;
	bool	point = false;

	if (is_nan(str))
		return (1);
	if (*str == '-')
		str++;
	while (*str && *str != 'f')
	{
		if (*str == '.' && !point && *(str + 1) != '\0')
			str++;
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	if (*str == 'f' && *(str + 1) != '\0')
		return (0);
	return (1);
}

int main(int argc, char *argv[])
{
	long int		i;
	char			c;
	float			f;
	double			d;

	if (argc != 2)
	{
		std::cout << "Invalid input" << std::endl;
		return 0;
	}
	if ((argv[1][0] >= '0' && argv[1][0] <= '9') || argv[1][0] == '-' || is_nan(argv[1]))
	{
		if (is_int(argv[1]))
		{
			i = atol(argv[1]);
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
		}
		else if (is_float(argv[1]))
		{
			d = atof(argv[1]);
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
		}
		else
		{
			std::cout << "Invalid input" << std::endl;
			return 0;
		}
	}
	else if (argv[1][1] != '\0')
	{
		std::cout << "Invalid input" << std::endl;
		return 0;
	}
	else
	{
		c = argv[1][0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	}
	if (errno == ERANGE)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		if (i > CHAR_MAX || i < CHAR_MIN || is_nan(argv[1]))
			std::cout << "char: impossible" << std::endl;
		else if (c >= 32 && c <= 126)
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (i < INT_MIN || i > INT_MAX || is_nan(argv[1]))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i << std::endl;
		if (fmod(f, 1) == 0)
		{
			std::cout << "float: " << f << ".0" << "f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
	}
	return 0;
}
