NAME =		character

CC =		clang++

CFLAGS =	-Wall -Wextra -Werror

HEADER =	AMateria.hpp \
			Character.hpp \
			Cure.hpp \
			Ice.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp

SRC =		main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			ICharacter.cpp \
			IMateriaSource.cpp \
			MateriaSource.cpp

SRCS = $(SRC)

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@echo "\n"
	@echo "\033[0;32mCompiling $(NAME)..."
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@echo "\nRemoving binaries..."
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
