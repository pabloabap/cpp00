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
 * Getter `_first_name` attribute.
 * @return `_first_name` attribute.
 */
std::string 	Contact::getFirstName( void ) const
{
	return (this->_first_name);
}

/**
 * Getter `_last_name` attribute.
 * @return `_last_name` attribute.
 */
std::string 	Contact::getLastName( void ) const
{
	return (this->_last_name);
}

/**
 * Getter `_nickname` attribute.
 * @return `_nickname` attribute.
 */
std::string 	Contact::getNickname( void ) const
{
	return (this->_nickname);
}

/**
 * Getter `_phone_number` attribute.
 * @return `_phone_number` attribute.
 */
std::string 	Contact::getPhoneNumber( void ) const
{
	return (this->_phone_number);
}

/**
 * Getter `_darkest_secret` attribute.
 * @return `_darkest_secret` attribute.
 */
std::string 	Contact::getDarkestSecret( void ) const
{
	return (this->_darkest_secret);
}
