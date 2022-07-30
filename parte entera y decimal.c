#include <stdio.h> 
#include <math.h>  
int main(void) {
  double numero = 456.884;
  printf("El número es %f\n", numero);

  double parteDecimal, parteEntera;
  parteDecimal = modf(numero, &parteEntera); 
  printf("Parte entera: %f. Parte decimal: %f\n", parteEntera, parteDecimal);
  return 0;
}
