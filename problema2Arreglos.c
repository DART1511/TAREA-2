#include <stdio.h>

int main()
{
    int n;
    int i;
    int numero;
    int contador = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    for (i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &numero);

    for (i = 0; i < n; i++)
        if (arreglo[i] == numero)
            contador++;

    printf("El numero %d se encuentra %d veces en el arreglo.\n", numero, contador);

    return 0;
}
