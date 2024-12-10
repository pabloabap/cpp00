/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:05:28 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/10 23:21:57 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	std::cout <<"Contact constructor" << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, \
		std::string nickname, std::string phone_number, std::string darksecret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darksecret;	
};

Contact::~Contact(void) {
	std::cout <<"Contact destructor" << std::endl;
};

std::string	Contact::getContactInfo(int attribute) const
{	
	std::string output;

	output = "\0";
	if (FIRST_NAME == attribute)
		output = this->_first_name;
	else if (LAST_NAME == attribute)
		output = this->_last_name;
	else if (NICK_NAME == attribute)
		output = this->_nickname;
	else if (PHONE_NUMBER == attribute)
		output = this->_phone_number;
	else if (DARKNEST_SECRET == attribute)
		output = this->_darkest_secret;
	return (output);
};

/*
<CLASS_NAME>::<CLASS_NAME>(void) {
	...
}


<CLASS_NAME>::<CLASS_NAME>(void) {
	...
}*/
