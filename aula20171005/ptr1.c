#include <stdio.h>

main()
{
    unsigned int x=0xFACA8421;
    unsigned char *p;
    int j;
    p = (unsigned char *) &x;
    for (j=0;j<sizeof(p);j++)
    {
        printf ("%p    ", (p+j));
        printf ("%u\n", *(p+j));
    }
    return 0;
}
