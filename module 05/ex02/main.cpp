/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:31:20 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/17 17:53:56 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "salut" << std::endl;

	// AForm FormA("test", 2); -> pas possible car Aform est abstrait;
	ShrubberyCreationForm	*FormSchrub = new ShrubberyCreationForm("Jardin");
	Bureaucrat	Claude("Claude", 3);

	std::cout << FormSchrub->getExecGrade() << std::endl;
	Claude.signAForm(*FormSchrub);
	FormSchrub->execute(Claude);
	return (0);
}
