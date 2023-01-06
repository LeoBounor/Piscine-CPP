/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:58:41 by Leo               #+#    #+#             */
/*   Updated: 2023/01/06 13:09:49 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	
	typedef struct s_message
	{
		std::string level;
		void	(Harl::*fct)(void);
	} t_message;
	
private:
	t_message	_messages[4];
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif