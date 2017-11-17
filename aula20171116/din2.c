#include<stdio.h>
#include<iostream>

void preenche (float M[][50], int l, int c)
{
	for (int i=0; i<l; i++)
		for (int j=0; j<c;j++)
		{
			printf ("\nPosicao [%d][%d]", i+1, j+1);
			scanf("%d", &M[i][j]);
		}
}
int main(){
	float matriz[50][50], i, j;
	int x, y, q;

	printf("Digite a ordem:\n");
	scanf("%d %d", &x, &y);
	q=x*y;
	printf("\n");
	preenche(matriz, x, y);

	//imprimindo a matriz transposta
	for(i=0;i<((q/2));i++){
		printf("%d %d", matriz[i], matriz[i+x]);
		printf("\n");
		if(matriz[ i ]%y==0)
			printf("\n"); 
	}
	system ("pause");
}