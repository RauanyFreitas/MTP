#include <stdio.h>
#include <time.h>
int main () {
    srand(time(0));
    int n, sorteado, soma;
    printf("Entre com um numero inteiro nao negativo: ");
    scanf("%d", &n);

    sorteado =  ("%d\n", rand()%2);
    printf("Numero sorteado: %d\n" , sorteado);
    soma = (sorteado + n);
    printf("Soma: %d\n" , soma);

    if(soma%2 == 0)
        printf("O numero e par.\n");
    else
        printf("O numero e impar.\n");


    return 0;
}
