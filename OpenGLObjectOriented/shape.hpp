#include <math.h>
#ifndef M_PI
#  define M_PI 3.14159265358979323846
#endif

class Shape
{
 public:
	float x;
	float y;
	float area;
	float perimeter;
};

class Ellipse: public Shape
{
public:
	float r;

	Ellipse(float, float, float);
	float getArea();
	float getPerimeter();
};

