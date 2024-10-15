/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:48:00 by timo              #+#    #+#             */
/*   Updated: 2024/10/15 16:11:26 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

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
		Fixed& operator=(const Fixed& obj);
		Fixed operator+(const Fixed& obj);
		Fixed operator-(const Fixed& obj);
		Fixed operator*(const Fixed& obj);
		Fixed operator/(const Fixed& obj);
		Fixed& operator++();
		Fixed operator++(int n);
		Fixed& operator--();
		Fixed operator--(int n);
		static Fixed& min(Fixed& first, Fixed& second);
		static Fixed& max(Fixed& first, Fixed& second);
		static const Fixed& min(const Fixed& first, const Fixed& second);
		static const Fixed& max(const Fixed& first, const Fixed& second);
		bool operator>(const Fixed& obj);
		bool operator>=(const Fixed& obj);
		bool operator<(const Fixed& obj);
		bool operator<=(const Fixed& obj);
		bool operator==(const Fixed& obj);
		bool operator!=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif