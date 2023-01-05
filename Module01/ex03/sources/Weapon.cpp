/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:21:21 by lbounor           #+#    #+#             */
/*   Updated: 2023/01/05 16:20:36 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon()
{
	std::cout << "Default constructor called for Weapon class." << std::endl;
}

Weapon::Weapon(const std::string &type) {
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Destructor called for Weapon class." << std::endl;
}

const std::string	&Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}