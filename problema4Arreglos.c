#include <stdio.h>

int main()
{
    int pares[100];
    int i;

    for (i = 0; i < 100; i++)
        pares[i] = (i + 1) * 2;

    for (i = 0; i < 100; i++)
        printf("%d\n", pares[i]);

    return 0;
}
