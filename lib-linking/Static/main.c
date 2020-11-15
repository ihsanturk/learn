#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"

int
main()
{
	int i;

	srand(0);
	for (i = 0; i < 10;i++)
		printf("myAdd(3 + 4) = %d\n", myAdd(3, 4));
}
