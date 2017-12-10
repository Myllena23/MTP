#include <stdio.h>


int main ()
{
	int i, n, flag=1;

	printf("Digite um numero: ");
	scanf ("%i", &n);

	for (i=n-1; i>1; i--)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}

	if (flag==0)
		printf("\nnao e primo\n");
	else printf("\nprimo\n");


	return 0;
}
