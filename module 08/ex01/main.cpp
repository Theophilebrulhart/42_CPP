/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrulhar <tbrulhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:37:31 by theophilebr       #+#    #+#             */
/*   Updated: 2023/02/01 17:22:55 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span spanA(99);
	
	srand(time(NULL));
	try 
	{
		spanA.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "not enough number in range\n";
	}
	try
	{
		for (int i = 0; i < 10000; i++)
		{
			spanA.addNumber(rand());
		}
	}
	catch (const std::exception &e)
		{
			std::cerr << "Span to small..you can't add more number to it\n";
		}
	
	try 
	{
		spanA.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "not enough number in range\n";
	}
	try 
	{
		spanA.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "not enough number in range\n";
	}
	return (0);
}