#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Obliczanie rownania kwadratowego postaci: ax^2 + bx + c = 0\n");
    int a,b,c;
    float x1,x2,delta,p;

    printf("Podaj wartosc wspolczynnika a: ");
    scanf("%i", &a);
    printf("Podaj wartosc wspolczynnika b: ");
    scanf("%i", &b);
    printf("Podaj wartosc wspolczynnika c: ");
    scanf("%i", &c);

    if (a == 0)
    {
        x1 = c/b *(-1);
        printf("x = %f", x1);
    }
    else
    {
        delta = (b*b) - 4*a*c;
        if(delta > 0)
        {
            x1 = (b*(-1) - sqrt(delta))/(2*a);
            x2 = (b*(-1) + sqrt(delta))/(2*a);
            printf("x1 = %f \nx2 = %f", x1, x2);
        }
        if(delta == 0)
        {
            x1 = (b/(2*a))*(-1);
        }
        if(delta < 0)
        {
            printf("Rownanie nie ma rozwiazan.");
        }
    }

    return 0;
}
