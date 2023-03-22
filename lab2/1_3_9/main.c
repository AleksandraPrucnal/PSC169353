#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,wynik;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &a);
    printf("Podaj druga liczbe: ");
    scanf("%f", &b);

    int dzialanie;
    printf("Wpisz 1 aby dodawac,\nWpisz 2 aby odejmowac,\nWpisz 3 aby mnozyc,\nWpisz 4 aby dzielic\n");
    scanf("%i", &dzialanie);

    if(dzialanie == 1)
    {
        printf("Wynik dodawania wynosi: %f", a+b);
    }
    else if(dzialanie == 2)
    {
        printf("Wynik odejmowania wynosi: %f", a-b);
    }
    else if(dzialanie == 3)
    {
        printf("Wynik mnozenia wynosi: %f", a*b);
    }
    else if(dzialanie == 4)
    {
        printf("Wynik dzielenia wynosi: %f", a/b);
    }
    else{
        printf("Nieprawidlowa wartosc.");
    }
    return 0;
}
