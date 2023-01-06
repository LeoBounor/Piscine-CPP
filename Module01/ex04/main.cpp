/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:47:37 by Leo               #+#    #+#             */
/*   Updated: 2023/01/06 12:40:06 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl << "Usage: filename [s1] [s2]" << std::endl;
		return (0);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Error: [s1] and/or [s2] are empty" << std::endl;
		return (0);
	}
	Replace replace(argv[1], argv[2], argv[3]);
	try {
		replace.replace();
	} catch (char *e) {
		std::cerr << "replace error: " << e << std::endl;
	}
    return 0;
}