/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:29:11 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/09 20:12:38 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif

# include "Contact.hpp"
# include <stdlib.h>

class PhoneBook {
	public:		
		PhoneBook(void);
		~PhoneBook(void);
		
		void	getContact(int id) const;
		void	setContact(void);
//		...
	private:
		static int _contacts_counter;

		Contact _contact[MAX_CONTACTS];
		void	_getSavedContacts(void) const;
		void	_getSearchedContact(int id) const;
		std::string	_fillInfo(std::string inPrompt);
		
//	protected:
//		...
};

#endif
