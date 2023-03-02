#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj nieujemna liczbe n: ");
    scanf("%i", &n);

    for(int i = 1; i < n; i++)
    {
        if(i*i > n)
        {
            break;
        }
    }
    printf("Pierwiastek zaokraglony w dol z podanej liczby wynosi: %i", )
    return 0;
}
