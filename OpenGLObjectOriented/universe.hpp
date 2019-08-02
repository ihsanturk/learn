#include "shape.hpp"

class Universe
{
public:
	int sizeX = 1366 / 2;
	int sizeY = 768 / 2;

	Shape Object;

	Universe(int, int);
	void addShape(Shape);
};
