#include <stdio.h>

int main ()
{
	int i,n, flag=0;

	printf("Digite um numero: ");
	scanf ("%i", &n);

	for (i=n-1; i>=1; i--)
	{
		if(n%i==0)
			flag=flag+i;
	}

	if (flag==n)
		printf("\ne perfeito\n");
	else printf("\nnao e perfeito\n");

	return 0;
}
