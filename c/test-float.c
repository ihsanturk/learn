#include <stdio.h>

int main(void)
{
  {
  float x = 2;
  float y = 10;
  
  printf("%.1f / %.1f = %.50f\n", x, y, x / y);

  if(0.2 == x / y)
    printf("YES\n");
  else
    printf("NO\n");
  }

  {
  double x = 2;
  double y = 10;

  printf("%.1f / %.1f = %.50f\n", x, y, x / y);

  if(0.2 == x / y)
    printf("YES\n");
  else
    printf("NO\n");
  }
  return 0;
}



