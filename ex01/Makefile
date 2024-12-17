# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 12:47:07 by pabad-ap          #+#    #+#              #
#    Updated: 2024/12/16 11:02:13 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook
CPP			=	c++
CPP_FLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

	SRC		= 	./main.cpp	\
				./Contact.cpp	\
				./PhoneBook.cpp	\
				./ft_utils.cpp

OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Makefile %.hpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
