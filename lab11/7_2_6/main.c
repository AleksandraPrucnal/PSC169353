#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    double *wsp;
    int n;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i=0; i<n; i++)
    {
        tab2[i].n = tab1[i].n;
        tab2[i].wsp=malloc(tab1[i].n * sizeof(int));
        for(int j=0; j<tab1[i].n; j++)
        {
            tab2[i].wsp[j] = tab1[i].wsp[j];
        }
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
