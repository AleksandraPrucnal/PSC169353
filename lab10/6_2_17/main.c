#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        temp[i]=malloc(m*sizeof(int*));
    }
    return temp;
}

void wypelnij_tab(int **tab, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tab[i][j] = i;
        }
    }
}

void zwolnij(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int foo(int **tab, int n, int m)
{
    int wieksza = 0;
    int mniejsza = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            wieksza += tab[i][j];
        }
        if(wieksza<mniejsza)
        {
            wieksza = mniejsza;
        }
    }
    return wieksza;
}

int main()
{
    int ** tab = alokuj(4,5);
    wypelnij_tab(tab,4,5);
    printf("%d\n", foo(tab,4,5));
    zwolnij(tab,4,5);
    return 0;
}
