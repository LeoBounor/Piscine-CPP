/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:45 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/27 10:08:37 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <iostream>

//				---CONSTRUCTOR---
Contact::Contact()
{
	return ;
}

//				---DESCTRUCTOR---
Contact::~Contact()
{
	return ;
}

//				---GETTERS---
int	Contact::get_index(void)
{
	return (this->_index);
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void)
{
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

//				---SETTERS---
void	Contact::set_index(int index)
{
	this->_index = index;
}

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nick_name(std::string nick_name)
{
	this->_nick_name = nick_name;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}