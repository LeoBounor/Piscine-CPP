/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:55:53 by Leo               #+#    #+#             */
/*   Updated: 2023/06/27 18:55:47 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Form;
class Bureaucrat
{
	private:
	
		const std::string	_name;
		int 				_grade;

	public:
	
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		
		Bureaucrat & operator=(Bureaucrat const & rhs);
		
		std::string getName() const;
		int getGrade() const;
		void setGrade(int grade);
		void incrementGrade();
		void decrementGrade();
		void signForm(Form & form);
		
		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif