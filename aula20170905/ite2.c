#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int b, p, r=1;

	printf("Digite uma base: ");
	scanf ("%i", &b);
	printf("Digite uma potencia: ");
	scanf ("%i", &p);

	for (int i=p; i>=1; i--)
		r=r*b;

	printf("%i ", r);
		
	system ("pause");
	return 0;
}
