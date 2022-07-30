#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	double numero, potencia; 
	printf("Ingresa el numero:\n");
	scanf("%lf", &numero);
	printf("Escribe la potencia para elevarlo:\n");
	scanf("%lf", &potencia);
	double elevado = pow(numero, potencia);
	printf("%lf elevado a la potencia %lf es %lf\n", numero, potencia, elevado);
	return 0;
}
