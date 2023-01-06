/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:58:56 by Leo               #+#    #+#             */
/*   Updated: 2023/01/06 13:17:25 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl Harl;

	std::cout << "DEBUG level :" << std::endl;
	Harl.complain("DEBUG");
	
	std::cout << "INFO level :" << std::endl;
	Harl.complain("INFO");
	
	std::cout << "WARNING level :" << std::endl;
	Harl.complain("WARNING");
	
	std::cout << "ERROR level :" << std::endl;
	Harl.complain("ERROR");
	
	std::cout << "Random string :" << std::endl;
	Harl.complain("random action");
	
	std::cout << "Empty string :" << std::endl;
	Harl.complain("");
	
	return (0);
}