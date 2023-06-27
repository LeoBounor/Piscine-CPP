/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:08:43 by Leo               #+#    #+#             */
/*   Updated: 2023/06/27 18:56:19 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;
class Form
{
	private:
		std::string _name;
		bool 		_signed;
		int 		_sign;
		int 		_exec;

	public:
		Form();
		Form(std::string name, int sign, int exec);
		Form(Form const &src);
		~Form();
		Form &operator=(Form const &rhs);
		void beSigned(Bureaucrat &bureaucrat);
		
		std::string getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif