#include <stdio.h>
#include <ctype.h>
int main()
{
    char frase[256];
    char olheiro;
    int indice = 0, contar = 0;

    printf("Entre com uma frase: ");
    gets(frase);
    olheiro = frase[indice];
    while(olheiro != '\0')
    {
        if (isalpha(indice))
        indice++;
        contar = indice;
    }
    printf("%\n", indice);
    return 0;
}
