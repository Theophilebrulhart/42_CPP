/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:54:02 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:34:31 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm Constructor par default called\n";
    return ;
}

// RobotomyRequestForm::RobotomyRequestForm()
// {
//     std::cout << "RobotomyRequestForm Constructor par parametre called\n";
//     return ;
// }

RobotomyRequestForm:: RobotomyRequestForm(RobotomyRequestForm const &cpy)
{
    std::cout << "RobotomyRequestForm Constructor par copy called\n";
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
    {

    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm Destructor called\n";
    return ;
}

void const	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	std::cout << "execution\n";
	return ;
}