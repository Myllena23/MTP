#include <stdio.h>

int main ()
{
	char palavra[256];
	int i;

	printf("Digite uma palavra:");
	scanf("%s",palavra);

	for (i=0; palavra[i]!= '\0'; i++);

	printf("%i\n", i);

	return 0;
}
