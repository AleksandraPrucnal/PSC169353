#include <stdio.h>
#include <stdlib.h>

double * foo(int n, double*tab1)
{
    int m = 0;
    for(int i=0; i<n; i++)
    {
        if(*(tab1+i) != 0)
        {
            m++;
        }
    }
    double * tab2 = (double*) malloc(m*sizeof(double));
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(*(tab1+i) != 0)
        {
            *(tab2+j)=*(tab1+i);
            j++;
        }
    }
    return tab2;
}

void wyswietlTablice(int n, double*tab)
{
    for(int i=0; i<n; i++)
    {
        printf("[%d]=%lf\n", i, *(tab+i));
    }
    printf("-------------\n");
}

int main()
{
    double tab[] = {3.5,0.0,2.45,7.8,9.1};
    double* tab2 = foo(5,tab);
    int m = 0;
    for(int i=0; i<sizeof(tab)/sizeof(double); i++)
    {
        if(*(tab+i) != 0)
        {
            m++;
        }
    }
    wyswietlTablice(m,tab2);
    return 0;
}
