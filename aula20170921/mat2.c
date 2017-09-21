#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    double b, c, r, a;
    printf("Digite o lado b e o lado c do triangulo e o angulo que eles formam em radianos: ");
    scanf("%lf %lf %lf", &b, &c, &r);

    a = sqrt(pow(b,2)+ pow(c,2)-2*b*c*cos(r));

    printf("%lf",a);

    system("pause");
    return 0;
}
