#include <stdio.h>

int main()
{
    double compra;
    double total;

    printf("Ingrese el monto de la compra: ");
    scanf("%lf", &compra);

    if (compra > 2500.0)
        total = compra * 0.92;
    else
        total = compra;

    printf("El cliente debe pagar: %.2lf\n", total);

    return 0;
}
