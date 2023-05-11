#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n)
{
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        temp[i]=malloc(100*sizeof(int*));
    }
    return temp;
}

void wypelnij_tab(int tab[][100], int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<100; j++)
        {
            tab[i][j] = i;
        }
    }
}

int suma(int tab[][100], int n)
{
    int suma = 0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<100; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main()
{
    int **tab = alokuj(4);
    wypelnij_tab(tab, 4);
    printf("%d\n", suma(tab,4));
    return 0;
}
