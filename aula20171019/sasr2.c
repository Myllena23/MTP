#include <stdio.h>

void par()
{
	int i, t = 0, j;
	for (i = 1; i <= 20 ; i++)
		if (i%2==0)
		{
		    printf("%d ", i);
		}
}
void impar()
{
	int i, t = 0, j;
	for (i = 1; i <= 20 ; i++)
		if (i%2!=0)
		{
		    printf("%d ", i);
		}
}
int main()
{
  int n;

  printf("Digite 1 para ver impares ou 2 para ver pares: ");
  scanf("%d", &n);
  if (n == 1)
    impar();
  if (n == 2)
    par();

  return 0;
}
