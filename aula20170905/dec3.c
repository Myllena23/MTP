#include <stdio.h>

#include <time.h>

int main ()
{
	int a, b, c, s;

	srand(time(0));
	a = rand()%7;
	b = rand()%7;
	c = rand()%7;

	s=a+b+c;

	if (s==7||s==11)
		printf ("\nDado 1:%i \nDado 2:%i \nDado 3:%i \nSoma:%i \nGanhou\n", a, b, c, s);
	else printf ("\nDado 1:%i \nDado 2:%i \nDado 3:%i \nSoma:%i \nPerdeu\n", a, b, c, s);


	return 0;
}
