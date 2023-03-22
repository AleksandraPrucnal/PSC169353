#include <stdio.h>
#include <stdlib.h>

double *foo(int n)
{
    return malloc(sizeof(double)*n);
}

int main()
{
    int n=10;
    int *wsk = foo(n);
    printf("%p\n", wsk);
    return 0;
}
