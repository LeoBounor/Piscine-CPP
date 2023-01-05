/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:33 by lbounor           #+#    #+#             */
/*   Updated: 2023/01/05 16:20:19 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "Constructor called for " << this->_name << " (HumanA class)." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called for " << this->_name << " (HumanA class)." << std::endl;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}