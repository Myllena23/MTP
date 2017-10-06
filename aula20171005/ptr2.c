#include <stdio.h>
main()
{
    int vetor[] = {0,1,2,4,8,16,1025}, j, cont=0,i;
    i= sizeof(vetor);
    unsigned char *p;
    p = (unsigned char *)vetor;
    for(j=0; j<i;j++)
    {
        printf("%u ", *(p+j));
        if (!p[j])
        {
            cont++;
        }
    }
    printf("\n%i", cont);
}
