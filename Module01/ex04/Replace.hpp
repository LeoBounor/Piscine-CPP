/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:49:14 by Leo               #+#    #+#             */
/*   Updated: 2023/01/06 12:36:49 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
private:
	std::string	_s1;
	std::string	_s2;
	std::string	_filename;
public:
	Replace(const std::string &filename, const std::string &s1, const std::string &s2);
	~Replace(void);
	void replace(void);	
};

#endif