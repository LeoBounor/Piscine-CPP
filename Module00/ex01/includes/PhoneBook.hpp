/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:01 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/26 13:49:13 by Leo              ###   ########lyon.fr   */
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

	PhoneBook(void);
	~PhoneBook(void);

	void			add(void);
	void			search(void);
	std::string		ft_getline(void);
	void			print_phonebook(void);
};

#endif