#include <stdio.h>
#include <stdlib.h>

int suma(int tab[][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main()
{
    int tablica[20][100];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            tablica[i][j] = i;
        }
    }

    printf("Suma= %d\n",suma(tablica,20));

    return 0;
}
