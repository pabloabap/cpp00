/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:53:56 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/09 17:33:59 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include  <iostream>
# include <string>

class Contact {
	public:
//		...
		Contact(void);
		Contact(std::string first_name, std::string last_name, \
			std::string nickname, std::string phone_number, \
			std::string darksecret);
		~Contact(void);
		
		std::string	getContactInfo(std::string);	
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
//	protected:
//		...
};

#endif
