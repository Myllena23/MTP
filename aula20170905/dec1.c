#include <stdio.h>

int main ()
{
	int x;

	printf("Digite um numero:");
	scanf ("%i",&x);

	if (x%2==0)
	printf("\npar");
	else printf("\nimpar");

	if (x%3==0)
	printf("; mult.3");

	if (x%5==0)
	printf("; mult.5");

	if (x%7==0)
	printf("; mult.7");

	printf("\n");


	return 0;
}
