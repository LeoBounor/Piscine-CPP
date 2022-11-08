/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:34 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/27 13:54:24 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	std::cout << "Bienvenue sur votre répertoire téléphonique." << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Au revoir, à bientôt!" << std::endl;
}

std::string	PhoneBook::ft_setline(void)
{
	std::string	line;

	while (std::getline(std::cin, line))
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
	contact[_index].set_first_name(ft_setline());
	std::cout << "Nom :" << std::endl;
	contact[_index].set_last_name(ft_setline());
	std::cout << "Surnom :" << std::endl;
	contact[_index].set_nick_name(ft_setline());
	std::cout << "Numéro de téléphone :" << std::endl;
	contact[_index].set_phone_number(ft_setline());
	std::cout << "Secret :" << std::endl;
	contact[_index].set_darkest_secret(ft_setline());
	_index++;
}

void	PhoneBook::search(void)
{
	std::string	idx;

	print_phonebook();
	std::cout << "Renseignez l'index du contact à afficher :" << std::endl;
	idx = ft_setline();
	if (idx == "1")
		print_contact(0);
	else if (idx == "2")
		print_contact(1);
	else if (idx == "3")
		print_contact(2);
	else if (idx == "4")
		print_contact(3);
	else if (idx == "5")
		print_contact(4);
	else if (idx == "6")
		print_contact(5);
	else if (idx == "7")
		print_contact(6);
	else if (idx == "8")
		print_contact(7);
	else
		std::cout << "Il n'y a rien à afficher." << std::endl;
}

void	PhoneBook::print_phonebook(void)
{
	int	i;

	i = 0;
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "Prénom" << "|" << std::setw(10) << "Nom" << "|" << std::setw(10) << "Surnom" << "|" << std::setw(10) << "Numéro" << "|" << std::endl;
	while (contact[i].get_first_name().empty() == false && i < 8)
	{
		std::cout << "|"
			<< std::setw(10) << contact[i].get_index() << "|"
			<< std::setw(9) << contact[i].get_first_name() << "|"
			<< std::setw(10) << contact[i].get_last_name() << "|"
			<< std::setw(10) << contact[i].get_nick_name() << "|"
			<< std::setw(10) << contact[i].get_phone_number() << "|"
			<< std::endl;
		i++;
	}
}

void	PhoneBook::print_contact(int index)
{
	if (contact[index].get_first_name().empty() == false)
	{
		std::cout << "Prénom : " << contact[index].get_first_name() << std::endl;
		std::cout << "Nom : " << contact[index].get_last_name() << std::endl;
		std::cout << "Surnom : " << contact[index].get_nick_name() << std::endl;
		std::cout << "Numéro de téléphone : " << contact[index].get_phone_number() << std::endl;
		std::cout << "Secret : " << contact[index].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Ce contact n'existe pas." << std::endl;
}