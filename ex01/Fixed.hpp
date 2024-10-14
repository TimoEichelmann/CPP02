/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:48:00 by timo              #+#    #+#             */
/*   Updated: 2024/10/08 16:59:52 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					val;
		static const int	f_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed(const int con);
		Fixed(const float con);
		Fixed & operator=(const Fixed & obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
