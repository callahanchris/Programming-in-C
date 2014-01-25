#include <stdio.h>

int prime (int x)
{
    int temp, i, counter = 0, value;
    
    for ( i = 2; i < x; ++i )
    {
        temp = x % i;
            if (temp == 0 )
                ++counter;
    }
    
    if ( counter == 0 )
        value = 1;
    else
        value = 0;
        
    return value;
    
}

int main (void)
{
    printf("7: %i\n", prime (7));
    printf("10: %i\n", prime (10));
    printf("89: %i\n", prime (89));    
    
    return 0;
}
