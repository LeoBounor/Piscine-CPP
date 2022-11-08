/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:10:45 by lbounor           #+#    #+#             */
/*   Updated: 2022/11/08 13:17:52 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	theString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &theString;
	std::string &stringREF = theString;

	std::cout << &theString << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << theString << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}