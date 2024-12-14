#CABECERA

NAME		= bankLogs
CPP		= g++
CPP_FLAGS	= -Wall -Wextra -Werror -std=98 -pedantic

SRC		= ./Account.cpp ./tests.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
