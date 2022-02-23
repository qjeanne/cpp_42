#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "cstdlib"

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
    }
    catch (std::bad_cast &ref)
    {
        std::cout << "A" << std::endl;
    }
    
	try
    {
        B &b = dynamic_cast<B&>(p);
    }
    catch (std::bad_cast &ref)
    {
        std::cout << "B" << std::endl;
    }
    
    try
    {
        C &c = dynamic_cast<C&>(p);
    }
    catch (std::bad_cast &ref)
    {
        std::cout << "C" << std::endl;
    }
}

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			std::cout << "A" << std::endl;
			return (new A());
		case 1:
			std::cout << "B" << std::endl;
			return (new B());
		case 2:
			std::cout << "C" << std::endl;
			return (new C());
	}
	return (0);
}

int main()
{
	Base	*base;

	base = generate();
	std::cout << std::endl;
	std::cout << "void identify(Base* p)" << std::endl;
	identify(base);
	std::cout << std::endl;
	std::cout << "void identify(Base& p)" << std::endl;
	identify(&(*base));
	delete base;
	return 0;
}
