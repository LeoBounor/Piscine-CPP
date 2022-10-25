/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:01 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/25 23:46:10 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{

private:
	
	Contact		contact[8];
	int			_index;
	
public:

	PhoneBook();
	~PhoneBook();

	void	add();
	void	search();
	
};

#endif