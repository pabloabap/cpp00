# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 11:37:12 by pabad-ap          #+#    #+#              #
#    Updated: 2024/12/16 11:37:16 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CPP		= g++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic


SRC		= ./megaphone.cpp

OBJ		=  $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests:
	@./tests.sh

.PHONY: all clean fclean re tests
