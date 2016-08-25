#include <stdio.h>
#include <time.h>
int main () {
    srand(time(0));
    int d1,d2, d3, soma;
    d1 =  ("%d\n", rand()%6+1);
    printf("Numero sorteado: %d\n" , d1);
    d2 =  ("%d\n", rand()%6+1);
    printf("Numero sorteado: %d\n" , d2);
    d3 =  ("%d\n", rand()%6+1);
    printf("Numero sorteado: %d\n" , d3);

    soma = (d1+d2+d3);
    printf("Soma: %d\n" , soma);

    if(soma==7 || soma==11)
        printf("Voce ganhou!!\n");
    else
        printf("Voce perdeu.\n");



    return 0;
}
