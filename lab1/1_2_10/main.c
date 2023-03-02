#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba;
    scanf("%f", &liczba);
    printf("Wartosc bezwzgledna z podanej liczby wynosi: %f", fabs(liczba));
    return 0;
}
