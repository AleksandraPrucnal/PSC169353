#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    int sqrt;
    for (int i = 1; i<n; i++)
    {
        if (i*i > n)
        {
            sqrt = i - 1;
            break;
        }
    }
    return sqrt;
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%i", &n);
    printf("%i", foo(n));
    return 0;
}
