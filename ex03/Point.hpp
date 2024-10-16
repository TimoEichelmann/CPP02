/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:13:09 by teichelm          #+#    #+#             */
/*   Updated: 2024/10/16 12:08:34 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#define GREEN "\033[32m"
#define RESET "\033[0m"

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float xi, const float yi);
		Point(const Point& p);
		Point& operator=(const Point& p);
		int getx() const;
		int gety() const;
		~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif