/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:34 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/26 13:51:06 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	std::cout << "Bienvenue sur votre répertoire téléphonique." << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Au revoir, à bientôt!" << std::endl;
}

std::string	ft_getline(void)
{
	std::string	line;

	while (getline(std::cin, line))
	{
		if (line.empty() == false)
			return (line);
		else
			std::cout << "Renseigner clairement le champ de texte." << std::endl;
	}
	std::cout << "Erreur." << std::endl;
	return (0);
}

void	PhoneBook::add(void)
{
	if ((_index + 1) == 8)
		_index = 0;
	contact[_index].set_index(_index + 1);
	std::cout << "Prénom :" << std::endl;
	contact[_index].set_first_name(ft_getline());
	std::cout << "Nom :" << std::endl;
	contact[_index].set_last_name(ft_getline());
	std::cout << "Surnom :" << std::endl;
	contact[_index].set_nick_name(ft_getline());
	std::cout << "Numéro de téléphone :" << std::endl;
	contact[_index].set_phone_number(ft_getline());
	std::cout << "Secret :" << std::endl;
	contact[_index].set_darkest_secret(ft_getline());
	_index++;
}

void	PhoneBook::search(void)
{
	
}

void	PhoneBook::print_phonebook(void)
{
	
}
