#include <stdio.h>
int main () {
    int n;
    printf("Entre com um numero: ");
    scanf("%d", &n);
    if(n%2 == 0)
        printf("O numero e par.\n");
    else
        printf("O numero e impar.\n");
    if(n%3 == 0)
        printf("O numero e multiplo de 3.\n");
    if(n%5 == 0)
        printf("O numero e multiplo de 5.\n");
    if(n%7 == 0)
        printf("O numero e multiplo de 7.\n");
    return 0;
}
