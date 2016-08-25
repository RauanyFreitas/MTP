#include <stdio.h>
int main () {
    float A, B, C, media;
    printf("Entre com a nota A: ");
    scanf("%f", &A);
    printf("Entre com a nota B: ");
    scanf("%f", &B);
    printf("Entre com a nota C: ");
    scanf("%f", &C);
    media = (A*2+B*3+C*5)/(10);
    printf("A media do aluno e: %.1f\n", media);


    return 0;
}
