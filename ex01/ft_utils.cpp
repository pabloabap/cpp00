/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:29:31 by pabad-ap          #+#    #+#             */
/*   Updated: 2024/12/16 11:18:45 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.hpp"

void	ft_trim(std::string &str)
{
	int	sp_counter;

	sp_counter = 0;
	for (std::string::iterator it=str.begin(); isspace(*it); ++it)
		sp_counter ++;
	str.erase(0, sp_counter);
	for (std::string::iterator it=str.end() - 1; (isspace(*it) || isblank(*it)) && \
			it!=str.begin(); --it)
	{
		str.resize(str.size() - 1);
	}
	if (str.empty())
		std::cout << "Field mustn't be empty or spaces string." \
			<< " Enter a valid string." << std::endl;
}
