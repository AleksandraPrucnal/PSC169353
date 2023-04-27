#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int i;
    while(napis[i])
    {
        i++;
    }
    return i;
}

int dlugosc2(wchar_t*napis)
{
    int i;
    while(*(napis+i))
    {
        i++;
    }
    return i;
}

int main()
{
    char napis[] = "Olsztyn";
    wchar_t napis2[] = L"Ola";
    printf("%d\n", dlugosc(napis));
    printf("%d\n", dlugosc2(napis2));
    return 0;
}
