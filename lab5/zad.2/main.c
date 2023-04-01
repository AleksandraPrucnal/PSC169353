#include <stdio.h>
#include <stdlib.h>

int foo(int(*wsk1)(int),int(*wsk2)(int),int n)
{
    return wsk1(n)+wsk2(n);
}

int foo1(int a)
{
    return a+1;
}

int foo2(int a)
{
    return a*2;
}

int main()
{
    printf("%d\n", foo(foo1,foo2,7));
    printf("%d\n", foo(foo1,foo2,-4));
    return 0;
}
