#include <stdio.h>
#include <stdlib.h>

int foo()
{
    double x;
    return &x;
}

int main()
{
    printf("%f", foo());
    return 0;
}
