/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:46:25 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/09 19:44:42 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main (void) 
{
	PhoneBook	phone_book;
	std::string	input ("\0");

	while (input.compare("EXIT") != 0)
	{
		std::cout << "Enter a command: ";
		if (!(std::getline(std::cin, input).good()))
			break;
		if (0 == input.compare("ADD"))
		{
			std::cout << "ADD selected" << std::endl;
			phone_book.setContact();
		}
		else if (0 == input.compare("SEARCH"))
			std::cout << "SEARCH selected" << std::endl;
		else if (0 == input.compare("EXIT"))
			std::cout << "EXIT selected" << std::endl;
		else
			std::cout << "Invalid command. Acepted commands: " \
				<< "[ADD] [SEARCH] [EXIT]" << std::endl;
	}
	return (0);
}
