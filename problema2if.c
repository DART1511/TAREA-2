#include <stdio.h>

int main()
{
    double sueldo;
    double nuevo_sueldo;

    printf("Ingrese el sueldo del trabajador: ");
    scanf("%lf", &sueldo);

    if (sueldo < 1000.0)
        nuevo_sueldo = sueldo * 1.15;
    else
        nuevo_sueldo = sueldo * 1.12;

    printf("El sueldo con aumento es: %.2lf\n", nuevo_sueldo);

    return 0;
}
