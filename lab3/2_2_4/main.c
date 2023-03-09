#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    return pow(2,n);
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%i", &n);
    printf("2 ^ %i = %i", n, foo(n));
    return 0;
}
