# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 11:35:08 by pabad-ap          #+#    #+#              #
#    Updated: 2024/12/16 11:35:13 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bankLogs
CPP		= g++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC		= ./Account.cpp ./tests.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile Account.hpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
