#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, B;
	int nlin, ncol;
	printf("Entre com a ordem: ");
	scanf("%d", &nlin);
	ncol= nlin;
	A = criarMatriz(nlin, ncol);
	B = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	B = adjunta(A);
	imprimirMatriz(B);
	destruirMatriz(A);
	destruirMatriz(B);
	return EXIT_SUCCESS;
}
