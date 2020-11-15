/*
 * TEST
 */

#include <stdio.h>

void
deleteFromArray(int value, int &array[])
{

  int i = 0;
  int size_of_the_array = sizeof(array[0]);
  printf("size of array: %lu\n", sizeof(array[0]));
  printf("last value: %d\n", array[size_of_the_array]);

  for (i = 0; i <= size_of_the_array; i++) {
    printf("[%d] %d\n", i, array[i]);
  }
}

int
main()
{
  int array[5] = {5, 6, 7, 8, 9};
  deleteFromArray(3, array);

  return 0;
}
