#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%i %i %i", &a, &b, &c);
    float srednia = (float)(a + b + c)/3;
    printf("Srednia arytmetyczna podanych liczb wynosi: %f", srednia);
    return 0;
}
