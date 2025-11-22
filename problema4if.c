#include <stdio.h>

int main()
{
    int a, b;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &b);

    if (b != 0 && a % b == 0)
        printf("%d es divisor de %d\n", b, a);
    else if (a != 0 && b % a == 0)
        printf("%d es divisor de %d\n", a, b);
    else
        printf("Ninguno de los numeros es divisor del otro\n");

    return 0;
}
