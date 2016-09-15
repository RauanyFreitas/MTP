#include <stdio.h>

#define recebe(c,p) \
    ({ printf("Entre com coord x do ponto %s: ",c); \
    scanf("%f", &p.x); \
    printf("Entre com coord y do ponto %s: ",c); \
    scanf("%f", &p.y); \
    printf("Entre com coord y do ponto %s: ",c); \
    scanf("%f", &p.z);})

#define mostra(p) \
    ({ printf("(%g; %g)\n", p.x, p.y, p.z);})

#define soma(a,b,c,s) \
    ({s.x = a.x + b.x; \
    s.y = a.y + b.y; \
    s.z = a.z + b.z;})

#define distancia(a,b) \
sqrt(pow(a.x-b.x, 2.0) + pow(a.y-b.y,2.0) + pow(a.z-b.z, 2.0))

struct Ponto {
    float x;
    float y;
    float z;
};

int main ()
{
    struct Ponto A, B, C, S;
    float distancia;
    recebe("A", A); recebe("B", B); recebe("C", C);
    soma(A,B,C,S);
    mostra(S);
    distancia = distancia(A,B);
    printf("A distancia entre eles: %g\n", distancia);


    return 0;
}

