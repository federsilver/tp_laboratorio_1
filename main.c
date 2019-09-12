#include <stdio.h>
#include <stdlib.h>

int main() {

double numero1;
double numero2;
char ope;
double resultado;

printf("Ingresa primer numero: \n");
scanf("%lf", &numero1);
printf("Ingresa operacion: \n");
scanf(" %c", &ope);
printf("Ingresa segundo numero: \n");
scanf("%lf", &numero2);

    if (ope == '+') {
        printf("Resultado: %f", numero1 + numero2);
    } else if (ope == '-') {
        printf("Resultado: %f", numero1 - numero2);
    } else if (ope == '*') {
        printf("Resultado: %f", numero1 * numero2);
    } else if (ope == '/') {
        printf("Resultado: %f", numero1 / numero2);
    } else {
        printf("Error en el ingreso");
    }

return resultado;

}
