#ifndef EX05_KAREN_HPP
#define EX05_KAREN_HPP

#include "iostream"
#include "string"

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);
};

typedef struct	s_map
{
	std::string		str;
	void (Karen::*function)();
}				t_map;

#endif
