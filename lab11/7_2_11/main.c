#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    int calkowita;
    double wymierna;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane dane;
    printf("liczba calkowita: wpisz 0\n");
    printf("liczba wymierna: wpisz 1\n");
    scanf("%d", &dane.tp);
    if(dane.tp == 0)
    {
        printf("podaj liczbe calkowita: ");
        scanf("%d", &dane.zaw.calkowita);
    }
    else
    {
        printf("podaj liczbe wymierna: ");
        scanf("%lf", &dane.zaw.wymierna);
    }
    return dane;
};

int main()
{
    struct Dane d = wczytaj();
    return 0;
}
