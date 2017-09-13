#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n, flag=0;

	printf("Digite um numero: ");
	scanf ("%i", &n);
	
	for (int i=n-1; i>=1; i--)
	{
		if(n%i==0)
			flag=flag+i;
	}

	if (flag==n)
		printf("\ne perfeito\n");
	else printf("\nnao e perfeito\n");
	
	system ("pause");
	return 0;
}
