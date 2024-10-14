/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:50:49 by timo              #+#    #+#             */
/*   Updated: 2024/10/08 14:27:07 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "copy constructor called" << std::endl;
	this->val = obj.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->val = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
}