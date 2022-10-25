/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:14 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/25 23:35:41 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{

private:

	int				_index;
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nick_name;
	std::string		_phone_number;
	std::string		_darkest_secret;
	
public:

	Contact();
	~Contact();
	
	//				---GETTERS---
	int				get_index(void);
	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nick_name(void);
	std::string		get_phone_number(void);
	std::string		get_darkest_secret(void);
	
	//				---SETTERS---
	void			set_index(int index);
	void			set_first_name(std::string first_name);
	void			set_last_name(std::string last_name);
	void			set_nick_name(std::string nick_name);
	void			set_phone_number(std::string phone_number);
	void			set_darkest_secret(std::string darkest_secret);
};

#endif