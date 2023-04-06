
#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {-8,3,4,-2,2,9,8,2,3,-1,-1,5};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=4
    int c = b+1; // b=4  , c=5
    int d = foo(&b,&c); // b=4  , c=5  , d=5
    int e = (wsk+=1)[2]; // b=4 , c=5  , d=5  , e=9
    c = d + (b+=3); // b=7 , c=12  , d=5  , e=9
    e = (d *= 3) + (c /= 3); // b=7  , c=4  , d=15  , e=19
    b = (c += -2) + (e -= 3); // b=18  , c=2  , d=15  , e=16
    b = *wsk + e; // b=14  , c=2  , d=15  , e=16
    return 0;
}
