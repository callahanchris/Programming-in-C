#include <stdio.h>

int main (void)
{
    int n;
    n = 0;
    printf(" n       Triangular Number\n");
    printf("---     -------------------\n");
    
    for ( n = 5; n <=50; n = n + 5 )
        printf("%2i          %i\n", n, n * (n + 1) / 2);
    
    return 0;
}
