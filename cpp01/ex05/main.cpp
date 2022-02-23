#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen		karen;
	std::string str;
	int			idx;

	if (argc == 2)
	{
		str = argv[1];
		std::string	level_array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		std::string *level_array_ptr = std::find(level_array, level_array + 4, str);
		idx = level_array_ptr - level_array;
		if (idx < 4)
			karen.complain(str);
	}

	return 0;
}
