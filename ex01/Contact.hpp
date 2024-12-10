/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:53:56 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/10 23:29:35 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include  <iostream>
# include <string>
# include "ft_utils.hpp"

class Contact {
	public:
//		...
		Contact(void);
		Contact(std::string first_name, std::string last_name, \
			std::string nickname, std::string phone_number, \
			std::string darksecret);
		~Contact(void);
		
		std::string getContactInfo(int attribute) const;
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
