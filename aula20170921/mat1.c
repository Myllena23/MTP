#include<stdio.h>
#include <math.h>

int main()
{
float x1, y1, x2, y2, d;
printf("Digite uma coordenada x e uma y de dois pontos: ");
scanf("%f %f %f %f", &x1, &y1, &x2, &y2);


d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

printf ("%f",d);

return 0;

}
