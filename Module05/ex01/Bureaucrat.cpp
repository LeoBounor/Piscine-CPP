/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:22:28 by Leo               #+#    #+#             */
/*   Updated: 2023/06/27 18:56:52 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	try
	{
		if (grade < 1)
		{
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	try
	{
		if (rhs.getGrade() < 1)
		{
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		}
		else if (rhs.getGrade() > 150)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade = rhs.getGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

void		Bureaucrat::incrementGrade()
{
	try
	{
		if (this->getGrade() <= 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->setGrade(this->getGrade() - 1);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void		Bureaucrat::decrementGrade()
{
	try
	{
		if (this->getGrade() >= 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->setGrade(this->getGrade() + 1);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}

void	Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException & e)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}