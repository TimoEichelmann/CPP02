/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:52:46 by timo              #+#    #+#             */
/*   Updated: 2024/10/14 18:24:06 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << static_cast<float>(fixed.getRawBits()) / (1 << 8);
    return os;
}

int main( void ) 
{
	Fixed a;
	Fixed b( 42 );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toFloat() << " as Float" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "c + b is:" << (b + c) << std::endl;
	std::cout << "b - c is:" << (b - c) << std::endl;
	
	 std::cout << "c * b is:" << (b * 0) << std::endl;
	std::cout << "b / c is:" << (b / c) << std::endl;
	std::cout << "c == b";
	if (c!= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return 0;
}

