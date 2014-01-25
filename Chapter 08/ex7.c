#include <stdio.h>

long int x_to_the_n (int x, int n)
{
    long int daxn = 1;
    int i;
    
    for (i = 1; i <= n; ++i)
        daxn *= x;
        
    return daxn;
}

int main (void)
{
    long int x_to_the_n (int x, int n);
    int xuser, nuser;
    printf("X to the what now?\nEnter an x: ");
    scanf("%i", &xuser);
    printf("\nAnd to what power? ");
    scanf("%i", &nuser);
    
    printf("\n%i to the %i is %li\n", xuser, nuser, x_to_the_n (xuser, nuser));
    return 0;
}
