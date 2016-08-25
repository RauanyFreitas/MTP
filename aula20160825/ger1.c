#include <stdio.h>
int main () {
    int n, i;
    printf("Entre com um numero: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            printf("Nao e primo!\n");
            break;
        }
    }
    if (i == n)
        printf("Primo!!\n");


    return 0;
}
