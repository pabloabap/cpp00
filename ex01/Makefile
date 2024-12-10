# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 12:47:07 by pabad-ap          #+#    #+#              #
#    Updated: 2024/12/10 21:31:55 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PhoneBook
CPP			= g++
CPP_FLAGS	= -Wall -Wextra -Werror -std=98 -pedantic

SRC		= ./main.cpp	\
		./Contact.cpp	\
		./PhoneBook.cpp	\
		./ft_utils.cpp

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
