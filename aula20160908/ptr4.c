#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, soma;
    printf("Digite dois numeros: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    soma = num1+num2;
    printf("%p: %f, %p: %f\n", &num1, num1, &num2, num2);
    printf ("%p, o resultado da some e': %f\n", &soma, soma);
    return 0;
}
