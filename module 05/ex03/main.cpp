/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:31:20 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/20 14:06:44 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	// AForm FormA("test", 2); -> pas possible car Aform est abstrait;
	//ShrubberyCreationForm	*FormSchrub = new ShrubberyCreationForm("Jardin");
	//RobotomyRequestForm		*FormSchrub = new RobotomyRequestForm("Ta mere");
	// PresidentialPardonForm		*FormSchrub = new PresidentialPardonForm("Pierre");
	 Bureaucrat	Claude("Claude", 3);
	//Bureaucrat	Hubert("Hubert", 150);

	// std::cout << FormSchrub->getExecGrade() << std::endl;
	// FormSchrub->execute(Claude);
	// Hubert.executeForm(*FormSchrub);
	// Hubert.signAForm(*FormSchrub);
	// Claude.signAForm(*FormSchrub);
	// FormSchrub->execute(Claude);

	// Hubert.executeForm(*FormSchrub);

	// delete(FormSchrub);
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
	Claude.signAForm(*rrf);
	

	
	return (0);
}
