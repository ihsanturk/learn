#include "universe.hpp"

Universe::Universe(int sizeX_, int sizeY_)
{
	sizeX = sizeX_;
	sizeY = sizeY_;
}

void
Universe::addShape(Shape usersShape)
{
	Object = usersShape;
}
