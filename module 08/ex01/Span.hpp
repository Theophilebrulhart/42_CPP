/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theophilebrulhart <theophilebrulhart@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:38:15 by theophilebr       #+#    #+#             */
/*   Updated: 2023/01/31 16:51:45 by theophilebr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <utility>

class Span
{
	public :

		Span(void);
		Span(unsigned int size);
		Span(Span const &cpy);
		Span &operator=(Span const &rhs);
		~Span(void);

		void	addNumber(int	value);
		void	shortestSpan();
		void	longestSpan() const;

	public :

	std::vector<int>	_lst;
	unsigned int		_size;
	unsigned int		_actualSize;
};
#endif
