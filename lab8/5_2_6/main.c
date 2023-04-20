#include <stdio.h>
#include <stdlib.h>

void kopiujn(char*nap1, char*nap2, int n)
{
    int d;
    while(nap1[d])
    {
        d++;
    }
    if(d<n)
    {
        n=d;
    }
    for (int i=0; i<n; i++)
    {
        nap2[i] = nap1[i];
    }
}

void kopiujn2(char*nap1, char*nap2, int n)
{
    int d;
    while(nap1[d])
    {
        d++;
    }
    if(d<n)
    {
        n=d;
    }
    for (int i=0; i<n; i++)
    {
        nap2[i] = nap1[i];
    }
}

int main()
{
    char nap1[] = "Ola";
    char nap2[] = "Aleksandra";
    kopiujn(nap1, nap2, 5);
    printf("%s\n", nap1);
    printf("%s\n", nap2);
    return 0;
}
