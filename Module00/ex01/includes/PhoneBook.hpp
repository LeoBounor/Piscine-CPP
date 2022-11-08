/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:01 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/27 13:38:57 by lbounor          ###   ########lyon.fr   */
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
	std::string		ft_setline(void);
	void			print_phonebook(void);
	void			print_contact(int index);
};

#endif