/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:54:19 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:54:35 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("An unamed ShrubberyCreationForm", 145, 137)
{
    std::cout << "🌳 ShrubberyCreationForm Constructor par default called\n";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm(target, 145, 137)
{
    std::cout << "ShrubberyCreationForm Constructor par parametre called\n";
    return ;
}

ShrubberyCreationForm:: ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
{
    std::cout << "🌳 ShrubberyCreationForm Constructor par copy called\n";
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
    {

    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "🌳 ShrubberyCreationForm Destructor called\n";
    return ;
}

void const	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (getI())
	{
		std::cout << "is signed\n";
	}
	return ;
}