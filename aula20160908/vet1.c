#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main()
{
    srand(time(0));
    unsigned int numero;
    float aleat[N];
    float soma = 0.0f, media;
    int i;
    printf("Entre com um numero inteiro nao nagativo: ");
    scanf("%u", &numero);
    for(i = 0; i < N; i++)
        aleat[i] = rand()%numero + 1;
    for(i = 0; i < N; i++)
        soma = soma + aleat[i];
    media = soma/N;
    printf("Media: %f\n", media);
    return 0;
}
