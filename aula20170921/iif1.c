#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double p,a;
    int i, flag;
    printf("Entre com uma probablidade em numeros decimais: ");
    scanf("%lf", &p);
    for (i=0; i<1000; i++)
        {
            srand(time(0));
            a = rand()%2;
            if(a<p)
                flag++;
            }
}
