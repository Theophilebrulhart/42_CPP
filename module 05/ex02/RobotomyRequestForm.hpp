/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:54:13 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:32:38 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "AForm.hpp"
# pragma once

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(void);
        //RobotomyRequestForm(void);
        RobotomyRequestForm(RobotomyRequestForm const &cpy);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
       ~RobotomyRequestForm(void);

	   virtual  const void execute(Bureaucrat const &executor);

    private:

};

#endif