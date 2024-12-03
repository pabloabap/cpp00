// Cabecera

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# ifndef MAX_CONTACTS
#  define MAX_CONTACTS 8
# endif


class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void	getContact(void) const;
		void	setContact(int id);
//		...
	private:
		Contact _contact[MAX_CONTACTS];
		void	_getSavedContacts(void) const;
		void	_getSearchedContact(int id) const;
		
//	protected:
//		...
};

#endif
