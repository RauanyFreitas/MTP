#include <stdio.h>
int main () {
    float b, h, area;
    printf("Entre com com o valor da base: ");
    scanf("%f", &b);
    printf("Entre com o valor da altura: ");
    scanf("%f", &h);
    area = ((b*h)/2);
    printf("A area do triangulo e; %.4f\n", area);


    return 0;
}
