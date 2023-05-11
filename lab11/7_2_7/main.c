#include <stdio.h>
#include <stdlib.h>

struct Zespolone
{
    double urojona;
    double rzeczywista;
};

struct Zespolone initZespolone(double im, double re)
{
    struct Zespolone temp;
    temp.urojona = im;
    temp.rzeczywista = re;
    return temp;
};

double dodaj(struct Zespolone Z1, struct Zespolone Z2)
{
    Z1.urojona + Z2.urojona;
    Z1.rzeczywista + Z2.rzeczywista;
    //return suma;
    return 0;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
