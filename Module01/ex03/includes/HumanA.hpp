/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:04 by lbounor           #+#    #+#             */
/*   Updated: 2023/01/05 16:20:00 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <Weapon.hpp>

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;
	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void) const;
};

#endif