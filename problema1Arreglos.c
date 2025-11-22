#include <stdio.h>

int main()
{
    int n;
    int i;
    int suma = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    for (i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < n; i++)
        suma += arreglo[i];

    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
