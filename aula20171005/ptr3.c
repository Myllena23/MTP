
#include <stdio.h>
main()
{
    int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF}, j, cont=0,i;
    i= sizeof(vetor);
    unsigned char *p;
    p = (unsigned char *)vetor;
    for(j=0; j<i;j++)
    {
        printf("%u ", *(p+j));
        if (p[j])
        {
            cont++;
        }
    }
    printf("\n%i", cont);

    return 0;
}
