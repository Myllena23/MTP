#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main (void)
{
	char palavras[5][256], aux [256];
	int i=0,j=0,k=0;
	for (i = 0; i<5; i++)
    {
        printf("Digite a palavra %i: ", i+1);
        scanf ("%s",palavras[i]);
    }

    for (i=0;i<5;i++){
            for (j=0; j<(strlen(palavras[i])); j++)
            {
                palavras[i][j] = tolower(palavras[i][j]);
            }
    }


    for (j=0; j<5; j++)
        for (k=1; k<5;k++)
        {
            if (strcmp(palavras[k-1], palavras[k])>0)
            {
                strcpy(aux, palavras [k-1]);
                strcpy(palavras [k-1], palavras [k]);
                strcpy(palavras [k], aux);
            }
        }
    for (j=0; j<5; j++)
    {
        printf ("%s\n", palavras[j]);

    }

	system ("pause");
	return 0;
}


