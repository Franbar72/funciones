#include <stdio.h>
#include <math.h>
main()
{

    char c1;
    int a, b;
    printf("Introduce el valor del primer numero: ");
    scanf("%i", &a);
    printf("Introduce el valor del segundo numero: ");
    scanf("%i", &b);

    printf("\n La suma es: %i", suma(a, b));
    printf("\n La resta es: %i", resta(a, b));
    printf("\n El producto es: %i", producto(a, b));
    printf("\n La division es: %i", division(a, b));

    system("pause");

}
