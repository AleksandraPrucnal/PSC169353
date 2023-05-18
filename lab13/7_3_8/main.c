#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * usunw(struct element * Lista, struct element * elem)
{
    struct element * wsk1;
    struct element *wsk2;
    if(Lista == NULL)
    {
        return Lista;
    }
    wsk1 = Lista;
    if(Lista == elem)
    {
        Lista=Lista->next;
        free(wsk1);
        return Lista;
    }
    while((wsk1->next!=NULL) && (wsk1->next!=elem))
    {
        wsk1=wsk1->next;
    }
    if(wsk1->next !=NULL)
    {
        wsk2=wsk1->next;
        wsk1->next=wsk2->next;
        free(wsk2);
    }
    return Lista;
};

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

    struct element * elem = malloc(sizeof(struct element));
    elem->i = 3;
    elem->next = malloc(sizeof(struct element));
    elem->next->i = -4;
    lista->next->next = NULL;
    wyswietl(lista);

    usunw(lista, elem);
    wyswietl(lista);
    return 0;
}
