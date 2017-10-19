#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}
int rodar()
{
    char c;
    int flag=0, soma=0, n;
do {
    scanf("%c", &c);
    n=dado();
    soma = soma + n;
	printf("... %d\n", n);
	flag++;

    } while(flag<5);
    return soma;

}


int main() {
    srand(time(0));
    char c;
    int n,soma=0, j=0;
    printf("Digite ENTER para rodar o dado ");

    do{ soma = rodar();

    printf("%d", soma);
    j++;

    if(soma>=18&&soma<=23)
    {
        printf("\nGanhou!");
        break;
    }

    }while (j<3);
    if(soma<18||soma>23)
    printf("\nPerdeu!!!\n");

    return EXIT_SUCCESS;
}
