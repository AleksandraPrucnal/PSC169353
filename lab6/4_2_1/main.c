#include <stdio.h>
#include <stdlib.h>

void wyswietlTablice(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        printf("[%d]=%d\n", i, *(tab+i));
    }
    printf("--\n");
}

void fooa(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i)=0;
    }
}

void foob(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i)=i;
    }
}

void fooc(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i)*=2;
    }
}

void food(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i)=abs(*(tab+i));
    }
}

int main()
{
    int *tab = malloc(5*sizeof(int));
    *tab=7;
    *(tab+1)=9;
    *(tab+2)=-3;
    *(tab+3)=2;
    *(tab+4)=8;
    int *tab2 = malloc(2*sizeof(int));
    *tab2=3;
    *(tab2+1)=-4;

    fooa(5,tab);
    wyswietlTablice(5,tab);

    foob(5,tab);
    wyswietlTablice(5,tab);

    fooc(5,tab);
    wyswietlTablice(5,tab);

    food(2,tab2);
    wyswietlTablice(2,tab2);

    return 0;
}
