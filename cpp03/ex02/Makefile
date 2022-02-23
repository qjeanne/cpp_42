NAME =		FragTrap

CC =		clang++

CFLAGS =	-Wall -Wextra -Werror

HEADER =	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp

SRC =		main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp

.cpp.o:		$(CC) $(CFLAGS) $(HEADER) $< -o $(<:.cpp-.o)

SRCS = $(SRC)

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n"
	@echo "\033[0;32mCompiling $(NAME)..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@echo "\nRemoving binaries..."
	@rm -f $(OBJ)
	@echo "\033[0m"

fclean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJ)
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\nDeleting trash..."
	@rm -f *.out
	@echo "\033[0m"

re: fclean all

test: all
	./$(NAME)
