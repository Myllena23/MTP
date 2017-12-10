#include <stdio.h>

int main ()
{
	float a, b, c, d, e, m;

	do{
		printf("\nTodas as notas devem estar entre 0 e 10: ");
		printf("\nDigite a nota a: ");
		scanf ("%f", &a);

		printf("\nDigite a nota b: ");
		scanf ("%f", &b);

		printf("\nDigite a nota c: ");
		scanf ("%f", &c);

		printf("\nDigite a nota d: ");
		scanf ("%f", &d);

		printf("\nDigite a nota e: ");
		scanf ("%f", &e);
	}while (a<0||a>10||b<0||b>10||c<0||c>10||d<0||d>10||e<0||e>10);

		m = ((a*2)+(b*2)+(c*2)+(d*3)+(e*5))/14;

		printf("\n%f", m);

	return 0;
}
