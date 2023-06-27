/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:08:40 by Leo               #+#    #+#             */
/*   Updated: 2023/06/27 18:56:40 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name(""), _sign(0), _exec(0)
{
	this->_signed = false;
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _sign(sign), _exec(exec)
{
	this->_signed = false;
	try
	{
		if (sign < 1 || exec < 1)
			throw Form::GradeTooHighException();
		if (sign > 150 || exec > 150)
			throw Form::GradeTooLowException();
		std::cout << "Form constructor called" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Form::Form(Form const &src) : _name(src._name), _sign(src._sign), _exec(src._exec)
{
	this->_signed = src._signed;
}

Form &	Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

int	Form::getSignGrade(void) const
{
	return (this->_sign);
}

int	Form::getExecGrade(void) const
{
	return (this->_exec);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() < this->_sign)
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << " form, sign grade " << rhs.getSignGrade() << ", exec grade " << rhs.getExecGrade() << ", is ";
	if (rhs.isSigned())
		o << "signed" << std::endl;
	else
		o << "not signed" << std::endl;
	return (o);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
