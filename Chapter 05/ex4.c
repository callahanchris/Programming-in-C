#include <stdio.h>

int main (void)
{
    int n, factorial;
    factorial = 1;
    printf(" n       factorial\n");
    printf("---     -----------\n");
    
    for ( n = 1; n <= 10; ++n )
    {
        factorial *= n;
        printf("%2i       %7i\n", n, factorial);
    }
    return 0;
}
