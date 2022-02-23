#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	std::string str;

	if (argc == 2)
	{
		str = argv[1];
		karen.complain(str);
	}

	return 0;
}
