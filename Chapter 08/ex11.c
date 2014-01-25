#include <stdio.h>

int arraySum (int array[5])
{
    int i, summa;
    
    summa = 0;
    
    for (i = 0; i < 5; ++i)
        summa += array[i];
        
    return summa;
}

int main (void)
{

    int array[5] = { 1, 2, 3, 5, 66 };
    printf("what's the sum? %i\n", arraySum (array));
    
    return 0;
}
