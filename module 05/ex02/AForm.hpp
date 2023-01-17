/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:51:11 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:24:24 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <iostream>

class Bureaucrat;

class AForm
{
	public :

		AForm(void);
		AForm(AForm const &cpy);
		AForm(std::string const AFormName, int signGrade, int execGrade);
		AForm	&operator=(AForm const &rhs);
		~AForm(void);

		void	setAFormName(std::string const name);
		void	setI(bool i);
		void	setSignGrade(int signGrade);
		void	setExecGrade(int setExecGrade);
		virtual const void execute(Bureaucrat const &executor) = 0;

		std::string const	getAFormName(void) const;
		bool				getI(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		void				beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public : 
			virtual const char *what() const throw();
	};

	private :

		std::string const	_AFormName;
		bool				_i;
		int					_signGrade;
		int					_execGrade;
};

std::ostream & operator<<(std::ostream &o, AForm const &rhs);

# include "Bureaucrat.hpp"

#endif