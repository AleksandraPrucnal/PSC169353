#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p = 1;
    printf("Podaj nieujemna liczbe n: ");
    scanf("%i", &n);

    for(int i = 1; i < n; i++)
    {
        if(i*i > n)
        {
            p = i- 1
            break;
        }
    }
    printf("Pierwiastek zaokraglony w dol z podanej liczby wynosi: %i", p);
    return 0;
}
