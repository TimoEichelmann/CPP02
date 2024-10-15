/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:48:00 by timo              #+#    #+#             */
/*   Updated: 2024/10/08 15:35:39 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	private:
		int					val;
		static const int	f_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed & operator =(const Fixed & obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
};
#endif
