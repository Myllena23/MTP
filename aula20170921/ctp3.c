#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main (void)
{
	char frase[90];
	int i, flag=0;

	printf ("Digite uma frase: ");
	fgets (frase, 256,stdin);

	for (i=0; frase[i]; i++)
    {
        if (isalpha(frase[i]))
            flag++;
    }
	printf ("%d",flag);

	system ("pause");
	return 0;
}
