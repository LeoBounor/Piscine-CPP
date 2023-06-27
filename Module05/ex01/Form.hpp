/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:08:43 by Leo               #+#    #+#             */
/*   Updated: 2023/06/21 12:28:27 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string _name;
		bool 		_signed;
		int 		_sign;
		int 		_exec;

	public:
		Form();
		Form(std::string name, bool signed_, int sign, int exec);
		Form(Form const &src);
		~Form();
		Form &operator=(Form const &rhs);
		std::string getName() const;
		
}

#endif