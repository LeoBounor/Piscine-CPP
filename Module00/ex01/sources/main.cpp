/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:13:01 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/27 13:49:23 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	prompt;

	while (std::getline(std::cin, prompt))
	{
		if (prompt == "ADD")
			phonebook.add();
		else if (prompt == "SEARCH")
			phonebook.search();
		else if (prompt == "EXIT")
			return (0);
		else
			std::cout << "Essayez une des commandes" << std::endl;
	}
	return (0);
}