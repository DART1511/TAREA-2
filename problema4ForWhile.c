#include <stdio.h>

int main()
{
    int N;
    int i;
    long long producto = 1;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        producto = producto * i;

    printf("El producto de los %d primeros numeros naturales es: %lld\n", N, producto);

    return 0;
}
