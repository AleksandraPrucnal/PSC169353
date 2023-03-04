#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    printf("Podaj kolejno cztery liczby: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float a_abs = fabs(a);

    int x = 0;
    while(a_abs * pow(x,2) + b*x + c <= d)
    {
        x++;
    }
    printf("Podpunkt a: x = %i\n",x);


    while(5 * pow(x,2) + a*x + b < c)
    {
        x++;
    }
    printf("Podpunkt b: x = %i\n",x-1);


    while(5 * pow(x,2) + a*x + b <= c)
    {
        x++;
    }
    printf("Podpunkt c: x = %i\n",x-1);

    return 0;

}
