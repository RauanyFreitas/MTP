#include <stdio.h>
#define mostra(B) \
({ printf ("%s\n", (B)? "Verdadeiro": "Falso"); })


typedef
    enum {false = 0, true = 1}
bool;

int main ()
{
    bool V =  true;
    bool F =  false;
    mostra( V == F);
    mostra(V =! F);
    mostra(V && F);
    mostra (V || F);
    mostra(2 > 3);

    return 0;
}
