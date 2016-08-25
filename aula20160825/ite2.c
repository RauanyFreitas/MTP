#include <stdio.h>
int main () {
    int B, P, i, resultado=;
    printf("Entre com a base: ");
    scanf("%d", &B);
    printf("Entre com a potencia: ");
    scanf("%d", &P);

    for(i=0; i<P; i++)
    {
        resultado = (resultado*P);
    }

    printf("O resultado e: %d\n", resultado);




    return 0;

}
