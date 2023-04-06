#include <stdio.h>
#include <stdlib.h>

double* plytka_kopia(int n, double *tab)
{
    return tab;
}

double * gleboka_kopia(int n, double * tab)
{
    double * newtab= (double*)malloc(n*sizeof(double));
    if(newtab == NULL)
    {
        return NULL;
    }
    for(int i=0; i<n; i++)
    {
        *(newtab +i) = *(tab+i);
    }
    return newtab;
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
    double tab[4] = {2.2, 4.5, 6.7, 8.9};
    wyswietlTablice(4,tab);
    double*tab2 = plytka_kopia(4, tab);
    wyswietlTablice(4,tab2);
    double* tab3 = plytka_kopia(4, tab);
    wyswietlTablice(4,tab3);
    return 0;
}
