#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m)
{
    int pow = 1;
    int sqrt;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            pow *= i;
        }
        if(pow > n)
        {
            sqrt = i -1;
            break;
        }
    }
    return sqrt;
}
int foo(int n, int m);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", foo(n,m));
    return 0;
}
