#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

void przepisz(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2=troj1;
}

int main()
{
    struct trojkat tr1 = {3,4,5};
    struct trojkat tr2 = {7,8,9};
    przepisz(tr1, &tr2);
    return 0;
}
