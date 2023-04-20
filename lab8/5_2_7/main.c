#include <stdio.h>
#include <stdlib.h>

void sklej(char*nap1, char*nap2, char*nap3)
{
    int d,e;
    while(nap1[d])
    {
        nap3[d] = nap1[d];
        d++;
    }
    while(nap2[e])
    {
        nap3[d+e]=nap2[e];
        e++;
    }
}

int main()
{
    char nap1[] = "Ala m";
    char nap2[] = "a kota";
    char *nap3 = malloc(11*sizeof(char));
    sklej(nap1, nap2, nap3);
    printf("%s\n", nap3);
    return 0;
}
