#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,w;
    printf("Podaj dwie dodatnie liczby calkowite: ");
    scanf("%i %i", &n, &m);

    for(int i = 1; i < m+1; i++)
    {
        n += n;
        printf("%i\n", n);
    }
    return 0;
}
