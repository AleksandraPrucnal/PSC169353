#include <stdio.h>
#include <stdlib.h>

int foo(int (*wsk1)(int), int (*wsk2)(int), unsigned int n)
{
    int warunek=0;
    for (int i=0; i<=n; i++)
    {
        if(wsk1(i)==wsk2(i))
        {
            warunek++;
        }
    }
    if(warunek == n+1)
    {
        return 1;
    }
    return 0;
}

int foo1(int a)
{
    return a+5;
}

int foo2(int a)
{
    return a+5;
}

int main()
{
    printf("%d\n", foo(foo1,foo2, 7));
    return 0;
}
