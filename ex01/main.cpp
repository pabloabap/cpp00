// CABECERA

#include "main.hpp"

int main (void) 
{
	PhoneBook	phone_book;
	std::string	input ("\0");

	while (input.compare("EXIT") != 0)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (0 == input.compare("ADD"))
			std::cout << "ADD selected" << std::endl;
		else if (0 == input.compare("SEARCH"))
			std::cout << "SEARCH selected" << std::endl;
		else if (0 == input.compare("EXIT"))
			std::cout << "EXIT selected" << std::endl;
		else
			std::cout << "Invalid command. Acepted commands: " \
				<< "[ADD] [SEARCH] [EXIT]" << std::endl;
	}
	return (0);
}
