/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:25:32 by lbounor           #+#    #+#             */
/*   Updated: 2023/01/04 09:29:06 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string		_type;
	
public:
	Weapon(void);
	Weapon(const std::string &type);
	~Weapon(void);
	
	const std::string	&getType(void) const;
	void				setType(const std::string &type);
	
};

#endif