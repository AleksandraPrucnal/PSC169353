#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if( n == 0)
    {
        return 1;
    }
    return n*foo(n-1);
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);
    printf("%d! = %d", n, foo(n));
    return 0;
}
