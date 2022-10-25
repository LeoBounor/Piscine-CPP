/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbounor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:10:28 by lbounor           #+#    #+#             */
/*   Updated: 2022/10/25 16:40:30 by lbounor          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		std::cout << (char)toupper(str[i++]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
			ft_toupper(argv[i]);
	}
	std::cout << std::endl;
}
