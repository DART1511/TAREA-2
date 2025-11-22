#include <stdio.h>

int main()
{
    double dolares, pesos;
    const double TASA = 11.96;

    printf("Ingrese la cantidad en dolares: ");
    scanf("%lf", &dolares);

    pesos = dolares * TASA;

    printf("%.2lf dolares equivalen a %.2lf pesos.\n", dolares, pesos);

    return 0;
}
