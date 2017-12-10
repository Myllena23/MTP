#include <stdio.h>

#include <time.h>

int main ()
{
	int n, a, s;

	printf("Informe um numero inteiro nao negativo. ");
	scanf ("%i", &n);

	srand(time(0));
	a = rand()%10;
	s=a+n;

	if (s%2==0)
		printf ("%i, %i, par", n, a);
	else printf("%i, %i, impar", n, a);


	return 0;
}
