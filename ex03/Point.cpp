/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:09:23 by teichelm          #+#    #+#             */
/*   Updated: 2024/10/16 11:22:01 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{}

Point::Point(const float xi, const float yi) : x(xi), y(yi)
{}

Point::Point(const Point& p) : x(p.x),	y(p.y)
{}

Point& Point::operator=(const Point& p)
{
	if (this == &p)
		return (*this);
	return (*this);
}

int	Point::getx() const
{
	int temp = this->x.getRawBits();
	return (temp);
}

int	Point::gety() const
{
	int temp = this->y.getRawBits();
	return (temp);
}

Point::~Point()
{}