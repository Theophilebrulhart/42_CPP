/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:53:37 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:32:11 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "AForm.hpp"
# pragma once

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(void);
        //PresidentialPardonForm(void);
        PresidentialPardonForm(PresidentialPardonForm const &cpy);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
       ~PresidentialPardonForm(void);

	   virtual const void execute(Bureaucrat const &executor);

    private:

};

#endif