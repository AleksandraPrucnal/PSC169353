#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, iloczyn = 1;
    printf("Podaj dodatnia liczbe calkowita wieksza niz 2: ");
    scanf("%i", &n);

    if (n%2 == 0)
    {
        for(int i = 2; i < n+1; i += 2)
        {
            iloczyn *= i;
        }
    }
    else{
        for(int i = 2; i < n; i += 2)
        {
            iloczyn *= i;
        }
    }
    printf("%i", iloczyn);

    return 0;
}
