#include <iostream>

typedef struct		s_data
{
	std::string 	info;
}					Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data		*data;
	Data		*data1;
	uintptr_t	ptr;

	data->info = "Hello, World!";
	ptr = serialize(data);
	data1 = deserialize(ptr);
	std::cout << data << " : " << data->info << std::endl;
	std::cout << ptr << std::endl;
	std::cout << data1 << " : " << data1->info << std::endl;
	return 0;
}
