/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:28:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/09 20:12:02 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::_contacts_counter = 0;

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "___Welcome to the PhoneBook!___" << std::endl;
	std::cout << "Type one of the available commands:" << std::endl;
	std::cout << "ADD - Save new contact" << std::endl;
	std::cout << "SEARCH - Display existing contacts and a";
	std::cout << " prompt to input contact index to display"; 
	std::cout << " contact info"<< std::endl;
	std::cout << "EXIT - Close the PhoneBook lossing all contact" \
		<< std::endl;
};

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
};

void PhoneBook::getContact(int id) const
{
	std::cout << "getContact called" << std::endl;
};


void PhoneBook::_getSavedContacts(void) const
{
	for (int i = 0; i < MAX_CONTACTS; ++i)
	{
		std::cout << "INDEX: " << std::endl;
	}
};

void PhoneBook::setContact(void)
{
	std::string	first_name;
	std::string	last_name; 
	std::string	nick_name; 
	std::string	phone;
	std::string	darksecret;

	first_name = PhoneBook::_fillInfo("FIRST NAME: ");
	std::cin.exceptions(~std::cin.goodbit);
	last_name = PhoneBook::_fillInfo("LAST NAME: ");
	std::cin.exceptions(~std::cin.goodbit);
	nick_name = PhoneBook::_fillInfo("NICKNAME: ");
	std::cin.exceptions(~std::cin.goodbit);
	phone = PhoneBook::_fillInfo("PHONE NUMBER: ");
	std::cin.exceptions(~std::cin.goodbit);
	darksecret = PhoneBook::_fillInfo("DARKSECRET: ");
	std::cin.exceptions(~std::cin.goodbit);
	this->_contact[PhoneBook::_contacts_counter % MAX_CONTACTS] = \
		Contact(first_name, last_name, nick_name, phone, darksecret);
	PhoneBook::_contacts_counter += 1;
};


std::string	PhoneBook::_fillInfo(std::string inPrompt)
{
	std::string line;
	
	std::cout << inPrompt;
	while (std::getline(std::cin, line).good()){
		if(line.empty()){
			std::cout << inPrompt;
		}
		else if (line.length() > 0)
			break;
	}
	return (line);
};
