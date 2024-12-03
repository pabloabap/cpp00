//CABECERA

NAME		= PhoneBook
CPP		= g++
CPP_FLAGS	= -Wall -Wextra -Werror -std=98 -pedantic


SRC		= ./megaphone.cpp

OBJ		= 

all: $(NAME)

$(NAME): $OBJ
	$(CPP) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
