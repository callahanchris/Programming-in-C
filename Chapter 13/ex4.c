#include <stdio.h>

#define MAX(x,y,z) ( (((x) > (y)) && ((x) > (z))) ? (x) : \
                    ((((y) > (x)) && ((y) > (z))) ? (y) : (z)) )

int main (void)
{
    int i = 5, j = 10, k = 6;
    printf("%d\n", MAX(i,k,j));
    return 0;
}
