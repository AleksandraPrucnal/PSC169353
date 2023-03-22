#include <stdio.h>
#include <stdlib.h>

void foo(int const *a, int *b)
{
    *b=*a;
}

int main()
{
    int x=5, y=7;
    foo(&x, &y);
    printf("x=%d, y=%d\n", x, y);
    return 0;
}
