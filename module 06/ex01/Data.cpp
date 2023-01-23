/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:57:51 by tbrulhar          #+#    #+#             */
/*   Updated: 2023/01/23 18:59:57 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void)
{
    std::cout << " Data Constructor par default called\n";
    return ;
}

Data:: Data(Data const &cpy)
{
    std::cout << " Data Constructor par copy called\n";
	*this = cpy;
    return ;
}

Data &Data::operator=(Data const &rhs)
{
    if (this != &rhs)
    {
		i = rhs.i;
		c = rhs.c;
    }
    return (*this);
}

Data::~Data(void)
{
    std::cout << "Data Destructor called\n";
    return ;
}