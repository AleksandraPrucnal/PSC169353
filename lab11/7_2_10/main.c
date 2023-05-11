#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int a;
    unsigned int b;
};

int main()
{
    union super_int zmienna;
    zmienna.a = 4;
    printf("%d\n", zmienna.a);
    printf("%u\n", zmienna.a);
    zmienna.b = 4;
    zmienna.a = -4;
    printf("%d\n", zmienna.a);
    printf("%u\n", zmienna.a);
    zmienna.b = -4;
    return 0;
}
