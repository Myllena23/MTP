#include <stdio.h>

int main ()
{
	int x, y;

	printf("Digite um numero inteiro: ");
	scanf ("%i", &x);

	for (y=1; x>1;x--)
		y=y*x;

	printf("O resultado do fatorial e %i.", y);

	return 0;
}
