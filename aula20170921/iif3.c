#include <stdio.h>

#include <stdint.h>

int64_t main ()
{
	int x, y;

	printf("Digite um numero inteiro: ");
	scanf ("%i", &x);

	for (y=1; x>1;x--)
		y=y*x;

	printf("%i.", y);

	return 0;
}
