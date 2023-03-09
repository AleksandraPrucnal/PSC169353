#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return 2*foo(n-1);
}

int main()
{
    int n;
    printf("Podaj nieujena liczbe calkowita: ");
    scanf("%d", &n);
    printf("%d", foo(n));
    return 0;
}
