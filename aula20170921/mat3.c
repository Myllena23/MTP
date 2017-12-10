#include <stdio.h>
#include <math.h>

int main ()
{
    double n, b, l;

    printf("Digite um numero e a base: ");
    scanf("%lf %lf", &n, &b);
    l = log10(n)/log10(b);
    printf("%lf",l);

    return 0;
}
