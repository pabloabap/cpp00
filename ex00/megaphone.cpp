/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:43:32 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/10 18:48:32 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	std::string str;
	int			arg_i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		arg_i = 1;
		while (arg_i < argc)
		{
			str = argv[arg_i];
			for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
			{
				if (isalpha(*it) && islower(*it))
					*it = toupper(*it);
				std::cout <<  *it;
			}
			arg_i ++;
		}
	}
	std::cout << std::endl;
	return (0);
}
