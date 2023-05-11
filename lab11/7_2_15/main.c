#include <stdio.h>
#include <stdlib.h>

enum zwierzak{PIES=-3,KOT,CHOMIK,RYBKA};

int main()
{
    enum zwierzak zmienna = KOT;
    printf("%d\n", zmienna);
    printf("%Iu\n", sizeof(enum zwierzak));
    return 0;
}
