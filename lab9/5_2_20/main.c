#include <stdio.h>
#include <stdlib.h>

char* godzina(int godz, int min, int sek)
{
    char* czas = malloc(sizeof(char) * 9);
    sprintf(czas, "%02d:%02d:%02d", godz, min, sek);
    return czas;
}

int main() {
    int godz = 9, min = 45, sek = 12;
    printf("%s\n", godzina(godz, min, sek));
    return 0;
}
