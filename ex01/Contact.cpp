/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:05:28 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/09 17:09:16 by pabad-ap         ###   ########.fr       */
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
}

Contact::~Contact(void) {
	std::cout <<"Contact destructor" << std::endl;
}

std::string Contact::getContactInfo(std::string attribute) {
	
	return (this->_first_name);
}

/*
<CLASS_NAME>::<CLASS_NAME>(void) {
	...
}


<CLASS_NAME>::<CLASS_NAME>(void) {
	...
}*/
