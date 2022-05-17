#include <stdio.h>
/*test power function, and old style of function declaration;2nd version*/
power(base, n)
int base, n;
{
    int i,p;
    p = 1;
    for ( i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
main()
{
    int i;
    for(i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i) , power(-3,i));
    return 0;
}
