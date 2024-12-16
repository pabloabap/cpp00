/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:05:28 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/16 10:58:11 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/** 
 * Contact default constructor, initialize it empty
 */
Contact::Contact(void) {
}

/**
 * Alternative constructor. If `first_name`, `last_name`, `nickname`, 
 * `phone_number`and `darlsecret`are passed as argumnets Contact with 
 * filled attributes will be generated
 */
Contact::Contact(std::string first_name, std::string last_name, \
		std::string nickname, std::string phone_number, \
		std::string darksecret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darksecret;	
}

/**
 * Default destructor.
 */
Contact::~Contact(void) {
}

/**
 * Return a string with the `attribute` of the contact specified as argument.
 * @param `attribute` Item from `e_attribute` enum from `ft_utils.hpp`.
 * @return Content of the attribute as string.
 */
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
	else if (DARKEST_SECRET == attribute)
		output = this->_darkest_secret;
	return (output);
}
