#include <stdio.h>
#include <stdlib.h>

void fooa(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
    {
        tab3[i] = tab1[i]+tab2[i];
    }
}

void foob(int n, int tab1[],int tab2[], int tab3[])
{
    for(int i=0; i<n; i++)
    {
        if(tab1[i] > tab2[i])
        {
            tab3[i]=tab1[i];
        }
        else
        {
            tab3[i]=tab2[i];
        }
    }
}

void fooc(int n, int tab1[], int tab2[], int tab3[])
{
    int temp1, temp2;
    for(int i=0; i<n; i++)
    {
        temp1=tab3[i];
        temp2=tab2[i];
        tab2[i]=tab1[i];
        tab3[i]=temp2;
        tab1[i]=temp1;
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
    //fooa(5, tab1, tab2, tab3);
    //wyswietlTablice(5,tab3);
    //foob(5, tab1, tab2, tab3);
    //wyswietlTablice(5,tab3);
    fooc(5, tab1, tab2, tab3);
    wyswietlTablice(5,tab1);
    wyswietlTablice(5,tab2);
    wyswietlTablice(5,tab3);
    return 0;
}
