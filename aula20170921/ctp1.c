#include<stdio.h>

#include<ctype.h>

int main (void)
{
	char frase[90];
	int i=0;

	printf ("Digite uma frase: ");
	fgets (frase, 90,stdin);

	for (i=0; frase[i]; i++)
		frase[i] = toupper(frase[i]);
	printf (frase);

	return 0;
}
