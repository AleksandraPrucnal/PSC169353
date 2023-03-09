#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    int s = 1;
    for(int i = 1; i < n+1; i++)
        s *= i;
    return s;
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);
    printf("%d\n", foo(n));
    return 0;
}
