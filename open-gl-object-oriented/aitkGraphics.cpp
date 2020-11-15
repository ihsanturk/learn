#include <iostream>
#include "universe.hpp"

int
main()
{
	Universe myUniverse = Universe(1366 / 2, 768 / 2);
	Ellipse myEllipse   = Ellipse(0.0, 0.0, 2);

	std::cout << "Perimeter: " << myEllipse.getPerimeter() << std::endl;
	std::cout << "Area     : " <<  myEllipse.getArea() << std::endl;

	myUniverse.addShape(myEllipse);

	return 0;
}
