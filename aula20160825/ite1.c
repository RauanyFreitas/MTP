#include <stdio.h>
int main () {
    int n, i, fat;
    printf("Entre com um numero: ");
    scanf("%d", &n);
    fat = 1;
    for(i = 2; i<= n; i++)
        fat = fat *i;
    printf("O fatorial de %d e: %d.\n", n, fat);


    return 0;
}
