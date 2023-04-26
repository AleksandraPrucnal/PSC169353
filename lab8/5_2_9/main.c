#include <stdio.h>
#include <stdlib.h>

void wytnij(char*napis, int n, int m)
{
    int d;
    while(napis[d])
    {
        d++;
    }
    if(m>=d)
    {
        m=d-1;
    }
    for(int i=0; i<m-n+1; i++)
    {
        napis[i]=napis[n+i];
    }
    napis[m-n+1] = '\0';
}

int main()
{
    char nap[] = "Aleksandra";
    wytnij(nap,3,5);
    printf("%s\n", nap);
    return 0;
}
