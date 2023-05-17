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

struct Zespolone dodaj(struct Zespolone Z1, struct Zespolone Z2)
{
    struct Zespolone suma;
    suma.urojona = Z1.urojona + Z2.urojona;
    suma.rzeczywista = Z1.rzeczywista + Z2.rzeczywista;
    return suma;
}

int main()
{
    struct Zespolone z1 = initZespolone(5.2, 7.8);
    struct Zespolone z2 = initZespolone(3.4,2.11);
    struct Zespolone wynik = dodaj(z1, z2);
    printf("Suma = %.2lf + %.2lfi\n", wynik.rzeczywista, wynik.urojona);
    return 0;
}
