/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:49:11 by Leo               #+#    #+#             */
/*   Updated: 2023/01/06 12:51:43 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const std::string &filename, const std::string &s1, const std::string &s2) :  _s1(s1), _s2(s2), _filename(filename)
{
    std::cout << "Constructor called for Replace class." << std::endl;
}

Replace::~Replace() 
{
    std::cout << "Destructor called for Replace class." << std::endl;
}

void	Replace::replace()
{
	std::ifstream	ifs(_filename);
    std::string		line;
	std::string		stream;
	std::ofstream	ofs;

    while (getline(ifs, line, '\0')) {
        size_t itr = line.find(_s1);
		while(itr != std::string::npos) {
			line.erase(itr, _s1.length());
			line.insert(itr, _s2);
			itr = line.find(_s1);
		}
        stream.append(line);
    }
    ofs.open(_filename.append(".replace")); // Verifier si is_open est true ??
    ofs << stream;
    ifs.close();
    ofs.close();
}
