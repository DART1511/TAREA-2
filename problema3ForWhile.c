#include <stdio.h>

int main()
{
    int i;
    int suma = 0;

    for (i = 10; i <= 50; i += 2)
        suma += i;

    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
