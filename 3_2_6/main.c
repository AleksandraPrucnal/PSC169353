#include <stdio.h>
#include <stdlib.h>

int foo(int n, int* w)
{
    *w = n;
    return *w;
}

int main()
{
    int *w;
    int n = 15;
    printf("%d", foo(n, *w));
    return 0;
}
