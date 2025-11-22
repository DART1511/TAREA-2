#include <stdio.h>

int main()
{
    int n;
    int i;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    for (i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arreglo[i] > 0)
            positivos++;
        else if (arreglo[i] < 0)
            negativos++;
        else
            nulos++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
