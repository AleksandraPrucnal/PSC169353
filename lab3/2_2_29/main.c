#include <stdio.h>
#include <stdlib.h>

int NWD(int n, int m)
{
    if(m != 0)
    {
        return NWD(m, n%m);
    }
    return n;
}

int main()
{
    int n,m;
    printf("Podaj dwie dodatnie liczby calkowite: ");
    scanf("%d %d", &n, &m);
    printf("%d",NWD(n,m));
    return 0;
}
