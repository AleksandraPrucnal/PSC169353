#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * dodajk(struct element * Lista, int a)
{
    struct element * wsk;
    if(Lista == NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
}

void wyswietl(struct element* Lista)
{
    if(Lista == NULL)
    {
        printf("lista jest pusta.\n");
        return;
    }
    struct element*wsk=Lista;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("------------\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i = 5;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 7;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -4;
    lista->next->next->next = NULL;
    wyswietl(lista);
    dodajk(lista,2);
    wyswietl(lista);
    return 0;
}
