#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int silnia = 1;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%i", &n);

    for(int i = 2; i <= n; i++)
    {
        silnia *= i;
    }
    printf("silnia = %i", silnia);
    return 0;
}
