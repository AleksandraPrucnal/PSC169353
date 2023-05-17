#include <stdio.h>
#include <stdlib.h>

enum zwierzak {pies, kot, chomik};

int main()
{
    enum zwierzak zmienna = chomik;
    printf("%d\n", zmienna);
    printf("%Iu\n", sizeof(enum zwierzak));
    return 0;
}
