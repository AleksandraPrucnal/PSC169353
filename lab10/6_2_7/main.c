#include <stdio.h>
#include <stdlib.h>

int* foo(int n)
{
    int ** temp = malloc(n*sizeof(int*));
    int j=1;
    for (int i =0; i<n; i++)
    {
        temp[i] = malloc(j*sizeof(int));
        j++;
    }
    return temp;
}

void zwolnij(int **tab, int n)
{
    for(int i=0; i<n; i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int ** tab = foo(4);
    printf("%p\n", tab);
    zwolnij(tab,4);
    return 0;
}
