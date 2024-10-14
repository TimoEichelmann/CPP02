/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:50:49 by timo              #+#    #+#             */
/*   Updated: 2024/10/09 11:18:14 by timo             ###   ########.fr       */
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

Fixed::Fixed(const int con)
{	
	std::cout << "Int constructor called" << std::endl;
	this->val = round(con * (1 << 8));
}

Fixed::Fixed(const float con)
{
	std::cout << "Float constructor called" << std::endl;
	this->val = round(con * (1 << 8));
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
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int		Fixed::toInt(void) const
{
	return (this->val / (1<<8));
}

float	Fixed::toFloat(void) const
{
	float	result = static_cast<float>(this->val / (1<<8));
	return(result);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
}
