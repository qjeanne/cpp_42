#include <iostream>
#include "string"
#include "fstream"

int main(int argc, char *argv[])
{
	std::string		s1;
	std::string		s2;
	std::string		new_file_name;
	std::ifstream	file;
	std::ofstream	new_file;
	std::string		line;
	size_t			idx;
	size_t			old_idx;

	if (argc != 4 || *argv[2] == '\0' || *argv[3] == '\0')
	{
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	new_file_name = argv[1];
	new_file_name.append(".replace");
	file.open(argv[1]);
	if (file.fail())
	{
		std::cout << "unable to open the file" << std::endl;
		return (1);
	}
	new_file.open(new_file_name);
	if (new_file.fail())
	{
		std::cout << "unable to create the file" << std::endl;
		file.close();
		return (1);
	}
	while (std::getline(file, line))
	{
		old_idx = 0;
		while (true)
		{
			idx = line.find(s1, old_idx);
			if (idx != std::string::npos && old_idx == 0)
				new_file << line.substr(0, idx);
			if (idx == std::string::npos)
			{
				if (old_idx == 0)
					new_file << line;
				break ;
			}
			old_idx = idx + s1.length();
			int start = idx + s1.length();
			int end = line.find(s1, old_idx);
			new_file << s2 + line.substr(start, end - start);
		}
		new_file << std::endl;
	}
	file.close();
	new_file.close();
	return (0);
}
