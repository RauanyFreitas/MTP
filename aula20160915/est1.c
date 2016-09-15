#include <stdio.h>

#define recebe(c,p) \
    ({ printf("Entre com coord x do ponto %s: ",c); \
    scanf("%f", &p.x); \
    printf("Entre com coord y do ponto %s: ",c); \
    scanf("%f", &p.y);})


#define mostra(p) \
    ({ printf("(%g; %g)\n" , p.x, p.y);})

#define soma(a,b,s) \
    ({s.x = a.x + b.x; \
    s.y = a.y +b.y;})

#define distancia(a,b) \
sqrt(pow(a.x-b.x, 2.0) + pow(a.y-b.y,2.0))

struct Ponto {
    float x;
    float y;
};

int main ()
{
    struct Ponto A, B, S;
    float distancia;
    recebe("A", A); recebe("B", B);
    soma(A,B,S);
    mostra(S);
    distancia = distancia(A,B);
    printf("A distancia entre eles: %g\n", distancia);


    return 0;
}
