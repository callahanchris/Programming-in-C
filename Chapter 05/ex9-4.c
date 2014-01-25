#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter, max;
    
    printf("How many numbers shall we calculate? ");
    scanf("%i", &max);    
    
    counter = 1;
    
    while ( counter <= max )
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
    
        triangularNumber = 0;
        n = 1;
        
        while ( n <= number )
        {
            triangularNumber += n;
            ++n;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber); 
    
        ++counter;
    }
    return 0;
    
}
