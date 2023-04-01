#include <stdio.h>
#include <stdlib.h>

void fooa(int n, int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
    {
        tab2[i] = tab1[i];
    }
}

void foob(int n, int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
    {
        tab2[i] = tab1[n-i-1];
    }
}

void wyswietlTablice(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    printf("--\n");
}

int main()
{
    int tab1[] = {3,5,7,-2,9};
    int tab2[] = {10,8,3,6,-3};
    fooa(5, tab1, tab2);
    wyswietlTablice(5,tab1);
    wyswietlTablice(5,tab2);
    foob(5, tab1, tab2);
    wyswietlTablice(5,tab2);

    return 0;
}
