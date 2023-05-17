#include <stdio.h>
#include <stdlib.h>

struct Ksiazka
{
    char tytul[50];
    int liczba_stron;
};

struct Ksiazka* initKsiazka(char tyt[50], int strony)
{
    if (strlen(tyt) < 5 || strony <= 50)
    {
        return NULL;
    }
    struct Ksiazka* wsk = malloc(sizeof(struct Ksiazka));
    wsk->liczba_stron = strony;
    strcpy(wsk->tytul, tyt);
    return wsk;
};

void pokazKsiazka(struct Ksiazka* arg)
{
    printf("Tytul ksiazki: %s, liczba stron: %d\n", arg->tytul, arg->liczba_stron);
}

void dodajStrony(struct Ksiazka* wsk)
{
    wsk->liczba_stron += 10;
}

int main()
{
    struct Ksiazka* nowa = initKsiazka("Nowaksiazka", 150);
    pokazKsiazka(nowa);
    dodajStrony(nowa);
    printf("Dodano strony:\n");
    pokazKsiazka(nowa);
    return 0;
}
