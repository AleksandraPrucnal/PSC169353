#include <stdio.h>
#include <stdlib.h>

void foo(int**tab, int n, int m)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        temp = tab[i][m-1];
        for(int j=m-1; j>0; j--)
        {
            tab[i][j] = tab[i][j-1];
        }
        tab[i][0] = temp;
    }
}

void wyswietl(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d][%d]=[%d]", i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");
}

int main()
{
    int ** tab= malloc(2*sizeof(int*));
    tab[0] = malloc(4*sizeof(int));
    tab[0] = malloc(4*sizeof(int));
    tab[0][0] = -3;
    tab[0][1] = 4;
    return 0;
}
