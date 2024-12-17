/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:28:41 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/16 11:13:51 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Non member counter of created contacts.
int PhoneBook::_contacts_counter = 0;

/**
 * PhoneBook default constructor. Welcome the user and explain available 
 * commands.
 */
PhoneBook::PhoneBook(void)
{
	std::cout << "___Welcome to the PhoneBook!___" << std::endl \
		<< "Type one of the available commands:" << std::endl \
		<< "ADD        - Save new contact." << std::endl \
		<< "SEARCH     - Display existing contacts and a" \
		<< " prompt to input contact index to display" \
		<< " contact info."<< std::endl \
		<< "EXIT       - Close the PhoneBook lossing all contact." \
		<< std::endl << std::endl;
	std::cout.exceptions(~std::cout.goodbit);
}

/**
 * PhoneBook default destructor. Display inform message and destruct PhoneBook.
 */
PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed, all contacts removed." << std::endl;
	std::cout.exceptions(~std::cout.goodbit);
}

/** 
 * Add new contart to the PhoneBook with the info inputted by the user.
 * It's mandatory that all fields have content. In case of empty string
 * or spaces string, a warning will alert the user and request again to fill
 * the field.
 * If the PhoneBook is full of contacts (8 contacts  maximun), the oldest
 * contact will be replaced by the new one.
 */
void PhoneBook::setContact(void)
{
	std::string	first_name;
	std::string	last_name; 
	std::string	nick_name; 
	std::string	phone;
	std::string	darksecret;

	first_name = PhoneBook::_fillInfo("FIRST NAME");
	last_name = PhoneBook::_fillInfo("LAST NAME");
	nick_name = PhoneBook::_fillInfo("NICKNAME");
	phone = PhoneBook::_fillInfo("PHONE NUMBER");
	darksecret = PhoneBook::_fillInfo("DARKSECRET");
	this->_contact[PhoneBook::_contacts_counter % MAX_CONTACTS] = \
		Contact(first_name, last_name, nick_name, phone, darksecret);
	PhoneBook::_contacts_counter += 1;
}

/**
 * Display a table with columns `index`, `_first_name`, `_last_name`
 * and `_nickname` from saved contacts.
 * Request user to input a index of a contact to get more details.
 * A warning will be shown if the index is out of range or wrong and 
 * request a input again. In other case user details will be shown.
 */
void PhoneBook::getContact(void) const
{
	this->_getSavedContacts();
	this->_getContactDetails();
}

/**
 * Request input to user and check if it is empty. In case of empty string
 * or spaces string, a warning will alert the user and request again to fill
 * the field.
 * @param inPrompt Text that inform which field is been fill.
 * @return Validated inputted string.
 */
std::string	PhoneBook::_fillInfo(std::string inPrompt)
{
	std::string	line;
	
	std::cout << inPrompt << std::endl;
	std::cout.exceptions(~std::cout.goodbit);
	while (std::getline(std::cin, line).good())
	{
		std::cin.exceptions(~std::cin.goodbit);
		ft_trim(line);	
		if(line.empty())
		{
			std::cout << inPrompt << std::endl;
			std::cout.exceptions(~std::cout.goodbit);
		}
		else if (0 == inPrompt.compare("PHONE NUMBER"))
		{
			if (0 == this->_phoneNumberChecker(line, inPrompt))
				break;
			
		}	
		else if (line.length() > 0)
			break;
	}
	std::cin.exceptions(~std::cin.goodbit);
	return (line);
}

/** Check if phone number is valid, 9 digits phone, warning the user if not.*/
int	PhoneBook::_phoneNumberChecker(const std::string &str, \
		const std::string &inPrompt) const
{
	int	phone_error_flag;

	phone_error_flag = 0;
	for (std::string::const_iterator  it=str.begin(); \
		it!=str.end() && phone_error_flag == 0 ; ++it)
	{
		if (!isdigit(*it) || str.length() != 9)
		{
			std::cout << "Invlaid phone number. " \
				<< "Only 9 digits phone accepted." \
				<< std::endl << inPrompt << std::endl;
			std::cout.exceptions(~std::cout.goodbit);
			phone_error_flag = 1;
			break;
		}
	}
	return (phone_error_flag);
}

/** 
 * Display a table with columns `index`, `_first_name`, `_last_name`
 * and `_nickname` from saved contacts. 
 */
void PhoneBook::_getSavedContacts(void) const
{
	this->_getSavedHeader();
	std::setiosflags (std::ios::right);
	for (int i = 0; i < MAX_CONTACTS; ++i)
	{
		if (!this->_contact[i].getFirstName().empty())
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|"
				<< std::setw(10) << this->_displayContactAttribute(\
					this->_contact[i].getFirstName()) << "|"
				<< std::setw(10) << this->_displayContactAttribute(\
					this->_contact[i].getLastName()) << "|"
				<< std::setw(10) << this->_displayContactAttribute(\
					this->_contact[i].getNickname()) << "|"
				<< std::endl;
			std::cout.exceptions(~std::cout.goodbit);
		}
	}
	std::resetiosflags (std::ios::right);
	this->_getSavedFooter();
}

/**
 * Display the header of [SEARCH] command initial table with saved contacts.
 */
void	PhoneBook::_getSavedHeader(void) const
{
	std::cout << "+" << std::setfill('-') \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::endl << std::setfill(' ') \
		<< "|" << std::setiosflags (std::ios::right) \
		<< std::setw(11) << "INDEX|" \
		<< std::setw(11) << "FIRST NAME|" \
		<< std::setw(11) << "LAST NAME|" \
		<< std::setw(11) << "NICKNAME|" \
		<< std::endl \
		<< "+" << std::setfill('-') \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setfill(' ') << std::resetiosflags(std::ios::right) \
		<< std::endl;
	std::cout.exceptions(~std::cout.goodbit);
}
	
/**
 * Display `str` with the expected format.
 * @param str Attribute of Contact object.
 */
std::string	PhoneBook::_displayContactAttribute(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

/**
 * Display the footer of [SEARCH] command initial table with saved contacts.
 */
void	PhoneBook::_getSavedFooter(void) const
{
	std::setiosflags (std::ios::right);
	std::cout << "+" << std::setfill('-') \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setw(11) << "+" \
		<< std::setfill(' ') \
		<< std::endl;
	std::cout.exceptions(~std::cout.goodbit);
	std::resetiosflags (std::ios::right);
}

/**
 * Based on the index inputted by the user, details of the contact asociated 
 * to that index will be shown, one per line.
 * In case of wrong or out of index input program finished with error message.
 */
void	PhoneBook::_getContactDetails(void) const
{
	std::string	input;

	if (this->_contact[0].getFirstName().empty())
	{
		std::cout << "Empty PhoneBook, `ADD` contacts first." \
			<< std::endl;
		std::cout.exceptions(~std::cout.goodbit);
	}
	else
	{
		std::cout << "Enter index to obtain contact details or " \
			 << "leave it empty to go to main menu: " << std::endl;
		std::cout.exceptions(~std::cout.goodbit);
		std::getline(std::cin, input);
		std::cin.exceptions(~std::cin.goodbit);
		if (!input.empty())
			this->_getContactByIndex(input);
	}
}

/**
 * Try to convert user's input to int to get a Contat by index. In case of 
 * error warning will be shown and promp will request input again until
 * it receive the correct input.
 * @param input String with the input received from the user.
 */
void	PhoneBook::_getContactByIndex(const std::string& input) const
{
	std::stringstream	str(input);
	int					index;
	
	try
	{
		str >> index;
		if(index > 0 && index <= 8 && !this->_contact[index - 1]\
			.getFirstName().empty())
			this->_displayContactDetails(index - 1);
		else
		{
			std::cout << "Index out of range, " \
				<< "specify a valid index." << std::endl;
			std::cout.exceptions(~std::cout.goodbit);
			this->_getContactDetails();
		}
	}
	catch(...)
	{
		std::cin.exceptions(~std::cin.goodbit);
		std::cout << "Index must be an integer." << std::endl;
		std::cout.exceptions(~std::cout.goodbit);
		this->_getContactDetails();
	}
}

/**
 * Display details from the contact asociated to `zero_index` Contact from
 * `_contact` array of contacts.
 * @param zero_index Indext starting from 0.
 */
void	PhoneBook::_displayContactDetails(int zero_index) const
{
	std::cout << "First name: " << this->_contact[zero_index]\
			.getFirstName() << std::endl \
		<< "Last name: " << this->_contact[zero_index]\
			.getLastName() << std::endl \
		<< "Nickname: " << this->_contact[zero_index]\
			.getNickname() << std::endl \
		<< "Phone number: " << this->_contact[zero_index]\
			.getPhoneNumber() << std::endl \
		<< "Darkest secret: " << this->_contact[zero_index]\
			.getDarkestSecret() << std::endl;
	std::cout.exceptions(~std::cout.goodbit);
}
