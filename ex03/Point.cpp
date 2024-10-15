/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teichelm <teichelm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:09:23 by teichelm          #+#    #+#             */
/*   Updated: 2024/10/15 16:22:34 by teichelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const float xi, const float yi) : x(xi), y(yi)
{}

Point::Point(const Point& p)
{
	this->x(p.x);
	this->y(p.y);
}

Point::Point& operator=(const Point& p)
float	Point::getx()
float	Point::gety()
Point::~Point()