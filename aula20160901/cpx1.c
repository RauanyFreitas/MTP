#include <stdio.h>
#include <complex.h>
int main()
{
    double complex Z1, Z2, soma, prod;
    double preal, pimag;
    printf("Real de Z1: ");
    scanf("%lf", &preal);
    printf("Imag de Z1: ");
    scanf("%lf", &pimag);
    Z1 = preal + pimag * I;
    printf("Real de Z2: ");
    scanf("%lf", &preal);
    printf("Imag de Z2: ");
    scanf("%lf", &pimag);
    Z2 = preal + pimag * I;
    soma = Z1 + Z2;
    prod = Z1 * Z2;
    printf("Soma: %lf + %lf i\n",creal(soma),cimag(soma));
    printf("Soma: %lf /_ %lf rad\n",cabs(soma),carg(soma));
    printf("Prod: %lf + %lf i\n",creal(prod),cimag(prod));
    printf("Prod: %lf /_ %lf rad\n",cabs(prod),carg(prod));


    return 0;
}
