/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:53:54 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:34:52 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Constructor par default called\n";
    return ;
}

// PresidentialPardonForm::PresidentialPardonForm()
// {
//     std::cout << "PresidentialPardonForm Constructor par parametre called\n";
//     return ;
// }

PresidentialPardonForm:: PresidentialPardonForm(PresidentialPardonForm const &cpy)
{
    std::cout << "PresidentialPardonForm Constructor par copy called\n";
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {

    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Destructor called\n";
    return ;
}

void const	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	std::cout << "execution\n";
	return ;
}