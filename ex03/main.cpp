/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timo <timo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:24:56 by timo              #+#    #+#             */
/*   Updated: 2024/10/16 12:15:36 by timo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	check_case(Point a, Point b, Point c, Point point)
{
	if (bsp(a, b, c, point))
		std::cout << "point lies within the triangle" << std::endl;
	else
		std::cout << "point lies not within the triangle" << std::endl;
}
int main (void)
{
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(2.5f, 5.0f);
	Point point(2.5f, 2.0f);
	Point point_edge(2.5f, 0.0f);
	Point point_vertex(0.0f, 0.0f);
	Point point_out(6.5f, 6.0f);
	
	std::cout << GREEN << "testing with point inside the triangle" << RESET << std::endl;
	check_case(a, b, c, point);
	std::cout << GREEN << "testing with point on edge" << RESET << std::endl;
	check_case(a, b, c, point_edge);
	std::cout << GREEN << "testing with point on vertice" << RESET << std::endl;
	check_case(a, b, c, point_vertex);
	std::cout << GREEN << "testing with point outside the triangle" << RESET << std::endl;
	check_case(a, b, c, point_out);
	std::cout << GREEN << "testing with point 'inside' degenerate triangle" << RESET << std::endl;
	Point a_small(0.0001f, 0.0001f);
	Point b_small(0.0002f, 0.0001f);
	Point c_small(0.0001f, 0.0002f);
	Point point_small(0.0003f, 0.0003f);
	check_case(a_small, b_small, c_small, point_small);
	std::cout << GREEN << "testing with point outside negative triangle" << RESET << std::endl;
	Point a_negative(-3.0f, -3.0f);
	Point b_negative(-3.0f, 3.0f);
	Point c_negative(3.0f, -3.0f);
	Point point_negative(-4.0f, 0.0f);
	check_case(a_negative, b_negative, c_negative, point_negative);

	
}