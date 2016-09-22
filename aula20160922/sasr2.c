#include <stdio.h>


void par();
void impar();

int main ()
{
    int n;
    printf("Digite 1 para impares e 2 para pares: ");
    scanf("%d", &n);

    if (n==1)
        impar();
    if (n==2)
        par();
    return 0;
}

void par()
{
  printf ("2, 4, 6, 8");
}

void impar()
{
  printf ("1, 3, 5, 7, 9");
}

