/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:29:11 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/10 21:33:05 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

# include <stdlib.h>
# include <iomanip>
# include "Contact.hpp"
# include "ft_utils.hpp"

class PhoneBook {
	public:		
		PhoneBook(void);
		~PhoneBook(void);
		
		void		setContact(void);
		void		getContact(void) const;
	private:
		static int 	_contacts_counter;

		Contact		_contact[MAX_CONTACTS];

		void		_getSavedContacts(void) const;
		std::string	_displayContactAttribute(std::string str) \
					const;
		std::string	_fillInfo(std::string inPrompt);
		int		_phoneNumberChecker(const std::string &str, \
					const std::string &inPrompt) const;
		void		_getSavedHeader(void) const;
		void		_getSavedFooter(void) const;
		void		_getContactDetails(void) const;
		void		_getContactByIndex(std::string input) const;
		void		_displayContactDetails(int zero_index) const;
};

#endif
