#include <stdio.h>
#include <stdlib.h>

void foo(double* tab)
{
    free(tab);
}

void wyswietlTablice(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, *(tab+i));
    }
    printf("--\n");
}

int main()
{
    double tab[] = {1.4,4.6,5.5,6.5,7.2};
    wyswietlTablice(5,tab);
    foo(tab);
    return 0;
}
