/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:40 by lbounor           #+#    #+#             */
/*   Updated: 2023/01/05 16:20:25 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Constructor called for " << this->_name << " (HumanB class)." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor called for " << this->_name << " (HumanB class)." << std::endl;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}