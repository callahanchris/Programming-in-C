#include <stdio.h>

#define MIN(x,y) ( ((x) < (y)) ? (x) : (y) )

int main (void)
{
    int i = 5, j = 10;
    printf("%d\n", MIN(j,i));
    return 0;
}
