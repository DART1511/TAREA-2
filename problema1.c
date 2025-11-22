#include <stdio.h>

int main()
{
    float num1, num2;          /* datos de entrada */
    float suma, resta, multi;  /* resultados */

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    /* operaciones */
    suma  = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;

    /* salida de resultados */
    printf("La suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    printf("La multiplicacion es: %.2f\n", multi);

    return 0;
}
