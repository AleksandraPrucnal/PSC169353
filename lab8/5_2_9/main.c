#include <stdio.h>
#include <stdlib.h>

int wytnij2(char*napis, int n, int m)
{
    int d;
    while(napis[d])
    {
        d++;
    }
    char* napis2 = malloc((d-m+n)*sizeof(char));
    for(int i=0; i<n; i++)
    {
        napis2[i]=napis[i];
    }
    for(int j=m; j<d; j++)
    {
        napis2[j] = napis[j];
    }
    return napis2;
}

void wytnij(char*napis, int n, int m)
{
    int d;
    while(napis[d])
    {
        d++;
    }
    for(int i=0; i<m-n; i++)
    {
        napis[i]=napis[m+i];
    }
}

int main()
{
    char nap[] = "Aleksandra";
    printf("Hello world!\n");
    return 0;
}
