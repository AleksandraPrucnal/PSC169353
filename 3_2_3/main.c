#include <stdio.h>
#include <stdlib.h>

void foo(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x=1, y=3;
    printf("x %d\n", x);
    printf("y %d\n", y);
    foo(&x,&y);
    printf("x %d\n", x);
    printf("y %d\n", y);
    return 0;
}
