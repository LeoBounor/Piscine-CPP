/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:59:20 by Leo               #+#    #+#             */
/*   Updated: 2023/06/27 18:50:31 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat X1("X1", 1);
    Bureaucrat X2("X2", 150);
    Form form1("form1", 42, 52);
 
    std::cout << form1;
    form1.beSigned(X1);
	X1.signForm(form1);
    std::cout << form1;
    form1.beSigned(X2);
    Form form2("form2", 42, 0);
    Form form3("form3", 190, 42);

	return 0;
}
