#include <stdio.h>

int main()
{
    double radio;
    double area, circunferencia;
    const double PI = 3.141592653589793;

    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);

    /* Area = pi * radio^2 */
    area = PI * radio * radio;

    /* Circunferencia = 2 * pi * radio */
    circunferencia = 2 * PI * radio;

    printf("El area del circulo es: %.2lf\n", area);
    printf("La circunferencia del circulo es: %.2lf\n", circunferencia);

    return 0;
}
