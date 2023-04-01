#include <stdio.h>
#include <stdlib.h>

int foo(const int *wsk1, int *const wsk2)
{
    return *wsk1- *wsk2;
}

int main()
{
    int x=7;
    int y=10;
    printf("%d", foo(&x, &y));
    return 0;
}
