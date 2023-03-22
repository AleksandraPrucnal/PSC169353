#include <stdio.h>
#include <stdlib.h>

int foo(int*wsk1, int*wsk2)
{
    if(*wsk1 > *wsk2)
        return *wsk2;
    return *wsk1;
}

int main()
{
    int x = 8, y = 3;
    printf("%d\n",foo(&x,&y));
    return 0;
}
