#include <stdio.h>
#include <stdlib.h>

void wytnijzw(char* nap1, char* nap2)
{
    int d1 = 0;
    while(nap1[d1])
    {
        d1++;
    }
    int d2 = 0;
    while(nap2[d2])
    {
        d2++;
    }
    for (int i=0; i<d2; i++)
    {
        for(int j=0; j<d1; j++)
        {
            if(nap1[j] == nap2[i])
            {
                for(int k=j; k<d1-1; k++)
                {
                    nap1[k] = nap1[k+1];
                }
                nap1[d1-1] = '\0';
                d1--;
                j--;
            }
        }
    }
}

int main()
{
    char nap1[] = "gruszka";
    char nap2[] = "truskawka";
    wytnijzw(nap1, nap2);
    printf("%s\n", nap1);
    return 0;
}
