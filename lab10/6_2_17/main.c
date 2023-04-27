#include <stdio.h>
#include <stdlib.h>

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
    printf("Hello world!\n");
    return 0;
}
