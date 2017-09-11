#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int d, flag=0, a, r, b, r2;

	printf("Informe um dos divisores de 8192. ");
	scanf ("%i", &d);

	if (8192%d==0)
		flag++;

	srand(time(0));
	do{
		a = rand()%1361;

	}while (a<1328||a>1360);

	printf ("\nQuanto e %i somado a 101. ", a);
	scanf ("%i", &r);
	
	if (a+101==r)
		flag++;

	b=rand()%100;
	printf("\nQuanto e %i vezes 3. ", b);
	scanf ("%i", &r2);
	if(b*3==r2)
		flag++;

	printf("\n%i ponto(s)\n", flag);
		
	system ("pause");
	return 0;
}
