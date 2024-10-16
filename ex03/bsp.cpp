/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 22:24:09 by timo              #+#    #+#             */
/*   Updated: 2024/10/16 11:57:53 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area_func(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return (std::abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float area = area_func(a.getx(), a.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	float area1 = area_func(point.getx(), point.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	float area2 = area_func(a.getx(), a.gety(), point.getx(), point.gety(), c.getx(), c.gety());
	float area3 = area_func(a.getx(), a.gety(), b.getx(), b.gety(), point.getx(), point.gety());
	bool edge_check(area1 > 0 && area2 > 0 && area3 > 0);
	if (!edge_check)
		return (false);
	return (area == area3 + area2 + area1);
}