#include <stdio.h>
#include <stdlib.h>

void wytnijzw(char*nap1, char*nap2)
{
    int d1;
    while(nap[d1])
    {
        d1++;
    }
    int d2;
    while(nap[d2])
    {
        d2++;
    }
    for (int i=0; i<d1; i++)
    {
        for(int j=0; j<d2; j++)
        {
            if(nap1[i] == nap2[j])
            {
                nap1[i];
            }
        }
    }
}


int main()
{
    printf("Hello world!\n");
    return 0;
}
