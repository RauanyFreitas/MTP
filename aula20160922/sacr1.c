#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pegacarta();
char mostracarta (int carta);


int main ()
{
    srand(time(0));
    int carta1 = pegacarta(), carta2 = pegacarta();
    int i, ncartas, carta, soma = 0;
    printf ("Quantas cartas voce quer?");
    scanf("%d", &ncartas);
    for(i=0; i< ncartas; i++)
    {
        carta = pegacarta();
        printf("%c", mostracarta(carta));
        soma = soma + ((carta > 10) ? 10 : carta);
    }
    if(soma > 21)
        printf("\nVoce perdeu!\n");
        else
        {
            printf("\nBanca: %c %c\n", mostracarta(carta1), mostracarta(carta2));
            if(soma > ((carta1 > 10 ) ?  10 : carta1) + ((carta2 > 10) ? 10: carta2))
                printf("\nVoce ganhou!\n");
            else
                printf("\nVoce perdeu!\n");
        }

    return 0;
}

int pegacarta()
{
    int carta = rand()%13 + 1;
    return carta;
}

char mostracarta (int carta)
{
    char figura;
    switch(carta)
    {
        case 1: figura = 'A'; break;
        case 10: figura = 'D'; break;
        case 11: figura = 'J'; break;
        case 12: figura = 'Q'; break;
        case 13: figura = 'K'; break;
        default: figura = 48 + carta;
    }

    return figura;
}
