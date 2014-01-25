// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
    int i, mins = 1, minsmins = 0, curr;
    
    printf("%i %i ", minsmins, mins);
    
    for (i = 2; i < 15; ++i)
    {
        curr = minsmins + mins;
        printf("%i ", curr);
        minsmins = mins;
        mins = curr;
    }    
    
    printf("\n");
    return 0;
}
