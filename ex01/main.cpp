/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:46:25 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/10 22:33:42 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_execute(void);

int main (void) 
{
	try
	{
		ft_execute();
	}
	catch (std::exception& e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
		std::cout.exceptions(~std::cout.goodbit);
	}
	return (0);
}

/** Contain the execution logic of the program, all the instructiosn
 * to process until end of program or failure.
 */
void	ft_execute(void)
{
	std::string	input;
	PhoneBook	phone_book;

	while (input.compare("EXIT") != 0)
	{
		std::cout << "Enter `SEARCH`, `ADD` or `EXIT`" << std::endl;
		std::cout.exceptions(~std::cout.goodbit);
		std::getline(std::cin, input);
		std::cin.exceptions(~std::cin.goodbit);
		if (0 == input.compare("ADD"))
			phone_book.setContact();
		else if (0 == input.compare("SEARCH"))
			phone_book.getContact();

		else if (0 != input.compare("EXIT"))
		{
			std::cout << "Invalid command. Try: " \
				<< "`ADD` `SEARCH` `EXIT`" \
				<< std::endl;
			std::cout.exceptions(~std::cout.goodbit);
		}
	}
};
