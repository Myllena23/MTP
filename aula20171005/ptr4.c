#include <stdio.h>

int main()
{
    float x, y, z=0;
    float *p, *q, *r;

    printf("Digite dois numeros reais: ");
    scanf("%f ", &x );
    scanf ("%f", &y);
    z=x+y;
    p = &x;
    q = &y;
    r = &z;

    printf ("0x%p  ", p);
    printf ("%.0f\n", *p);
    printf ("0x%p  ", q);
    printf ("%.0f\n", *q);
    printf ("0x%p  ", r);
    printf ("%.0f\n", *r);

    return 0;
}

