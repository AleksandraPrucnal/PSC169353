#include <stdio.h>
#include <stdlib.h>

void foo(int**tab, int n, int m)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        temp = tab[i][m-1];
        for(int j=m; j<m; j++)
        {
            printf("")
        }
    }
}

int main()
{
    int ** tab= malloc(2*sizeof(int*));
    return 0;
}
