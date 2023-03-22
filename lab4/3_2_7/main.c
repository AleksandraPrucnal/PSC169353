#include <stdio.h>
#include <stdlib.h>

void foo(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int x=1, y=3;
    int *wsk_x=&x;
    int *wsk_y=&y;
    foo(wsk_x, wsk_y);
    printf("x=%d, y=%d", x, y);
    return 0;
}
