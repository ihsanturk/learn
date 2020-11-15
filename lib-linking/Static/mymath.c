#include "mymath.h"
#include <stdlib.h>

int
myAdd(int x, int y)
{
	return x + y + rand() % 10;
}
