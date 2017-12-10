#include <stdio.h>

int main ()
{
	int i, b, p, r=1;

	printf("Digite uma base: ");
	scanf ("%i", &b);
	printf("Digite uma potencia: ");
	scanf ("%i", &p);

	for (i=p; i>=1; i--)
		r=r*b;

	printf("%i ", r);

	return 0;
}
