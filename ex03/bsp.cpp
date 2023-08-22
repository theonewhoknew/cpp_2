#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

float area(int const x1, int const y1, int const x2, int const y2, int const x3, int const y3)
{
	return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0f);
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float triangle_area;
	float pbc_area;
	float apc_area;
	float abp_area;

	triangle_area = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	pbc_area = area(p.getX(), p.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	apc_area = area(a.getX(), a.getY(), p.getX(), p.getY(), c.getX(), c.getY());
	abp_area = area(a.getX(), a.getY(), b.getX(), b.getY(), p.getX(), p.getY());

	return (pbc_area + apc_area + abp_area == triangle_area);
}