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

int foo (int ***tab)
{

}

int main()
{
    int *** tab = alokuj(100,100,100);
    return 0;
}
