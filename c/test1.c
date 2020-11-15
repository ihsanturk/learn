#include <stdio.h>

void by_val(int arg) { arg += 2; }
void by_ref(int*arg) { *arg += 2; }

int
main()
{
    int x = 0;
    by_val( x); printf("%d\n", x);  // prints 0
    by_ref(&x); printf("%d\n", x);  // prints 2

    int y = 0;
    by_ref(&y); printf("%d\n", x);  // prints 2
    by_val( y); printf("%d\n", x);  // prints 2
}
