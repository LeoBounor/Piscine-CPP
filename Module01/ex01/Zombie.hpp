/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:01:54 by lbounor           #+#    #+#             */
/*   Updated: 2022/11/08 13:05:58 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string		_name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif