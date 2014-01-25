// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return (x);
}


// Function to compute the square root of a number

float squareRoot (float x, float epsilon)
{
//    const float epsilon = .00001;
    float guess = 1.0;
    
    while ( absoluteValue (guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
        
    return guess;
} 

int main (void)
{
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0, .5));
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0, .25));
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0, .1));
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0, .001));
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0, .00001));
    
    return 0;
}
