#include <stdio.h>

int main()
{
    double capital;
    double tasa;
    double interes;
    double monto_final;

    printf("Ingrese la cantidad invertida: ");
    scanf("%lf", &capital);

    printf("Ingrese la tasa de interes mensual (en porcentaje): ");
    scanf("%lf", &tasa);

    interes = capital * (tasa / 100.0);
    monto_final = capital + interes;

    printf("El monto final despues de un mes es: %.2lf\n", monto_final);

    return 0;
}
