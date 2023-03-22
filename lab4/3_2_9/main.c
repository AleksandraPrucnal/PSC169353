#include <stdio.h>
#include <stdlib.h>

int foo()
{
    return malloc(sizeof(int));
}

int main()
{
    int* wsk1 = foo();
    printf("%p\n", wsk1);
    return 0;
}
