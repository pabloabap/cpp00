// CABECERA

#include <iostream>
#include "PhoneBook.hpp"

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
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::getContact(int id) const
{




}


void PhoneBook::_getSavedContacts(void) const
{
	for (int i = 0; i < MAX_CONTACTS; ++i)
	{
		std::cout << "INDEX | FIRST NAME | LAST NAME | NICK NAME" << std:endl;
	}
}


