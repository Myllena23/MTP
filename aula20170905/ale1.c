#include <stdio.h>

#include <time.h>

int main ()
{
	int x;

	srand(time(0));

	printf("%d ",rand() %100);

	x = rand()%294;

	do{	x = rand()%294;
	}while (x<101||x>293);

	printf ("%d\n", x);

	return 0;
}
