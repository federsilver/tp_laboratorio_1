

#include <stdio.h>

int main()
{
    float num1;
    char operador;
    float num2;
    float resultado;

    printf("Ingrese [numero 1]\n");
    scanf("%f", &num1);

    printf("Ingrese [+ - * /]\n");
    scanf("%c", &operador);

    printf("Ingrese [numero 2]\n");
    scanf("%f", &num2);

    /* Switch the value and perform action based on operator*/
    switch(operador)
    {
        case '+':
            resultado = num1 + num2;
            break;

        case '-':
            resultado = num1 - num2;
            break;

        case '*':
            resultado = num1 * num2;
            break;

        case '/':
            resultado = num1 / num2;
            break;

        default:
            printf("Error");
    }

    /* Detalla el resultado */
    printf("%.2f %c %.2f = %.2f", num1, operador, num2, resultado);

    return 0;
}
