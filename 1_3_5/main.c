#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Ile danych chcesz wprowadzic?\nWpisz cyfre 2(jesli chcesz podac podstawe i wysokosc) lub 3(dlugosci bokow): ");
    int dane;
    scanf("%i", &dane);
    int a,b,c,h;
    float pole,p;

    if (dane == 2)
    {
        printf("Podaj dlugosc podstawy: ");
        scanf("%i", &a);
        printf("Podaj wysokosc: ");
        scanf("%i", &h);
        pole = a*h/2;
        printf("Pole trojkata wynosi: %f", pole);
    }
    else if(dane == 3)
    {
        printf("Podaj dlugosc 1 boku: ");
        scanf("%i", &a);
        printf("Podaj dlugosc 1 boku: ");
        scanf("%i", &b);
        printf("Podaj dlugosc 1 boku: ");
        scanf("%i", &c);
        p = (a+b+c)/2;
        pole = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Pole trojkata wynosi: %f", pole);
    }
    else
    {
        printf("Nieprawidlowa wartosc.");
    }
    return 0;
}
