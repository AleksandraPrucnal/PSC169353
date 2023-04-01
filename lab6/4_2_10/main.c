#include <stdio.h>
#include <stdlib.h>

int fooa(int n, int *tab)
{
    int temp=*tab;
    for(int i=0; i<n; i++)
    {
        if(temp < *(tab+i))
        {
            temp= *(tab+i);
        }
    }
    return temp;
}

int foob(int n, int *tab)
{
    int temp=*tab;
    for(int i=0; i<n; i++)
    {
        if(temp > *(tab+i))
        {
            temp=*(tab+i);
        }
    }
    return temp;
}

int fooc(int n, int *tab)
{
    int temp=*tab;
    int indeks=0;
    for(int i=0; i<n; i++)
    {
        if(temp < *(tab+i))
        {
            temp= *(tab+i);
            indeks=i;
        }
    }
    return indeks;
}

int food(int n, int *tab)
{
    int temp=*tab;
    int indeks=0;
    for(int i=0; i<n; i++)
    {
        if(temp > *(tab+i))
        {
            temp= *(tab+i);
            indeks=i;
        }
    }
    return indeks;
}

int fooe(int n, int *tab)
{
    int temp=abs(*tab);
    for(int i=1; i<n; i++)
    {
        if(temp < abs(*(tab+i)))
        {
            temp= abs(*(tab+i));
        }
    }
    return temp;
}

int main()
{
    int *tab = malloc(5*sizeof(int));
    *tab=-3;
    *(tab+1)=5;
    *(tab+2)=-8;
    *(tab+3)=4;
    *(tab+4)=-6;
    printf("max = %d\n", fooa(5,tab));
    printf("min = %d\n", foob(5,tab));
    printf("indeks max = %d\n", fooc(5,tab));
    printf("indeks min = %d\n", food(5,tab));
    printf("max bezwzgledna = %d\n", fooe(5,tab));
    return 0;
}
