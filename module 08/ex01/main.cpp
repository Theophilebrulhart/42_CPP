/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:37:31 by theophilebr       #+#    #+#             */
/*   Updated: 2023/01/31 16:58:52 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span spanA(23);
	
	try 
	{
		spanA.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cerr << "not enough number in range\n";
	}
	spanA.addNumber(33);
	spanA.addNumber(67);
	spanA.addNumber(1);
	spanA.addNumber(2);
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