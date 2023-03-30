#include <stdio.h>
#include <stdlib.h>

int foo(int n, unsigned int tab[])
{
    int iloczyn=1;
    for(int i=0; i<n; i++)
    {
        iloczyn*=tab[i];
    }
    return pow(iloczyn, 1.0/n);
}

int main()
{
    int tab[] = {3,4,5,6,10};
    printf("%d\n", foo(5,tab));
    return 0;
}
