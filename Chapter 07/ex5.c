#include <stdio.h>

// predicted output: 1 1 2 4 8 16 32 64 128 256

int main (void)
{
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i, j;
    
    for (j = 0; j < 10; ++j)
        for (i = 0; i < j; ++i)
            numbers[j] += numbers[i];
            
    for (j = 0; j < 10; ++j)
        printf("%i ", numbers[j]);
        
    printf("\n");
    
    return 0;
    
}
