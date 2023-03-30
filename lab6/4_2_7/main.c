#include <stdio.h>
#include <stdlib.h>

void fooa(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
    {
        tab3[i] = tab1[i]+tab2[i];
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
    int tab3[] = {1,6,-7,8,9};
    fooa(5, tab1, tab2, tab3);
    wyswietlTablice(5,tab3);

    return 0;
}
