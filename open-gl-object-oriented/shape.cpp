#include "shape.hpp"

Ellipse::Ellipse(float x_, float y_, float r_)
{
	x = x_;
	y = y_;
	r = r_;
}

float Ellipse::getArea()
{
	return M_PI * r * r;
}

float Ellipse::getPerimeter()
{
	return 2 * M_PI * r;
}
