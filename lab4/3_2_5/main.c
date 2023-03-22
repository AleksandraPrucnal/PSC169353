#include <stdio.h>
#include <stdlib.h>

int foo(int const * x, int const *y)
{
    return *x + *y;
}

int main()
{
    int x = 10, y = 3;
    printf("suma %d + %d = %d", x,y,foo(&x,&y));
    return 0;
}
