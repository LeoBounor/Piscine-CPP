/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:58:49 by Leo               #+#    #+#             */
/*   Updated: 2023/01/06 13:17:14 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->_messages[0].level = "DEBUG";
	this->_messages[0].fct = &Harl::debug;

	this->_messages[1].level = "INFO";
	this->_messages[1].fct = &Harl::info;

	this->_messages[2].level = "WARNING";
	this->_messages[2].fct = &Harl::warning;

	this->_messages[3].level = "ERROR";
	this->_messages[3].fct = &Harl::error;
	
	std::cout << "Constructor called for Harl class." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Destructor called for Harl class." << std::endl;
}

void	Harl::debug(void)
{
    std::cout << "DEBUG: " << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: " << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
    std::cout << "WARNING: " << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error(void)
{
    std::cout << "ERROR: " << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->_messages[i].level)
			return (this->*_messages[i].fct)();
	}
	std::cout << "No other actions." << std::endl;
}
