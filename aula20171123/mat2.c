#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A;
	int nlin, ncol, det;
	printf("Entre com a ordem: ");
	scanf("%d", &nlin);
	ncol= nlin;
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);	
	det=determinante(A);
	printf("%d", det);
	destruirMatriz(A);
	return EXIT_SUCCESS;
}
