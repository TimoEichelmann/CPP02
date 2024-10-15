/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:50:49 by timo              #+#    #+#             */
/*   Updated: 2024/10/15 15:16:12 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
//	std::cout << "copy constructor called" << std::endl;
	this->val = obj.getRawBits();
}

Fixed::Fixed(const int con)
{	
//	std::cout << "Int constructor called" << std::endl;
	this->val = con << f_bits;
}

Fixed::Fixed(const float con)
{
//	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(con * (1 << f_bits));
}

Fixed& Fixed::operator= (const Fixed& obj)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->val = obj.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed& obj)
{
	Fixed result;
	result.val = (this->val + obj.val);
	return (result);
}

Fixed Fixed::operator-(const Fixed& obj)
{
	Fixed result;
	result.val = (this->val - obj.val);
	return (result);
}

Fixed Fixed::operator*(const Fixed& obj)
{
	Fixed result;
	result.val = (this->val) * obj.val;
	result.val /= (1 << f_bits);
	return (result);
}

Fixed Fixed::operator/(const Fixed& obj)
{
	if (obj.val == 0)
	{
		std::cout << "Division by 0 is illegal" << std::endl;
		exit(1);
	}
	Fixed result;
	result.val = (this->val * (1 << f_bits)) / obj.val;	
	return (result);
}

bool Fixed::operator>(const Fixed& obj)
{
	if (this->val > obj.val)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& obj)
{
	if (this->val < obj.val)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& obj)
{
	if (this->val <= obj.val)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& obj)
{
	if (this->val >= obj.val)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& obj)
{
	if (this->val == obj.val)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& obj)
{
	if (this->val != obj.val)
		return (true);
	return (false);
}

Fixed&	Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed	Fixed::operator++(int n)
{
	Fixed	result;
	result.val = this->val;
	this->val++;
	n--;
	return (result);
}

Fixed	Fixed::operator--(int n)
{
	Fixed	result;
	result.val = this->val;
	this->val--;
	n--;
	return (result);
}

int	Fixed::getRawBits(void) const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first.val < second.val)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first.val > second.val)
		return (first);
	return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first.val < second.val)
		return (first);
	return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first.val > second.val)
		return (first);
	return (second);
}


int		Fixed::toInt(void) const
{
	return (this->val / (1<<f_bits));
}

float	Fixed::toFloat(void) const
{
	float	result = static_cast<float>(this->val) / (1<<f_bits);
	return(result);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}
