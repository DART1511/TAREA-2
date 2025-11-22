#include <stdio.h>

int main()
{
    double distancia_ida;
    int dias;
    double distancia_total;
    double precio_base;
    double precio_final;

    printf("Ingrese la distancia de ida en km: ");
    scanf("%lf", &distancia_ida);

    printf("Ingrese el numero de dias de estancia: ");
    scanf("%d", &dias);

    distancia_total = distancia_ida * 2.0;
    precio_base = distancia_total * 0.23;

    if (dias > 7 && distancia_total > 800.0)
        precio_final = precio_base * 0.70;
    else
        precio_final = precio_base;

    printf("El precio del ticket es: %.2lf\n", precio_final);

    return 0;
}
