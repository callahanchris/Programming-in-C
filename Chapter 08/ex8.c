#include <stdio.h>


float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return (x);
}

float squareRoot (float x)
{
    const float epsilon = .00001;
    float guess = 1.0;
    
    while ( absoluteValue (guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;
        
    return guess;
}



int main (void)
{
    float squareRoot (float x);
    float absoluteValue (float x);
    int a, b, c;
    float x1, x2;
    float discriminant;
    
    printf("Let's solve a quadratic equation.\n");
    printf("Enter values for a, b, and c: ");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    discriminant = b * b - (4 * a * c);
    
    if ( discriminant >= 0 )
    {
        x1 = (-b + squareRoot (discriminant)) / (2 * a);
        x2 = (-b - squareRoot (discriminant)) / (2 * a);
        if ( x1 - x2 > .01 )
            printf("\nTwo possible values of x are: %f and %f.\n", x1, x2);
        else
            printf("\nX equals %f\n", x1);
    }
    else
        printf("Sorry, only imaginary results.\n");

    
    return 0;    
        
         
}
