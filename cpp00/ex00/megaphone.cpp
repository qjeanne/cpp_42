#include <iostream>

int main(int argc, char **argv)
{
	int		num = 1;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (num < argc)
		{
			while (*(argv[num]) != '\0')
				std::cout << (char)std::toupper(*(argv[num])++);
			num++;
		}
	}
	std::cout << std::endl;
	return 0;
}
