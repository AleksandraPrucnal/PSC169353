#include <stdio.h>
#include <stdlib.h>

int *** alokuj(int n, int m, int o)
{
    int *** temp = malloc(n*sizeof(int**));
    for(int i=0; i<n; i++)
    {
        temp[i]=malloc(m*sizeof(int*));
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            temp[i][j] = malloc(o*sizeof(int));
        }
    }
    return temp;
}

void wypelnij_tab(int ***tab, int n, int m, int o)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < o; k++)
            {
                tab[i][j][k] = i;
            }
        }
    }
}

void zwolnij(int ***tab, int n, int m, int o)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            free(tab[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int foo(int ***tab, int n, int m, int o)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < o; k++)
            {
                suma += tab[i][j][k];
            }
        }
    }
    return suma;
}

int main()
{
    int ***tab = alokuj(100,100,100);
    wypelnij_tab(tab, 100,100,100);
    printf("%d\n", foo(tab, 100,100,100));
    zwolnij(tab,100,100,100);
    return 0;
}
