// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, neg, right_digit;
    
    printf("Enter your number.\n");
    scanf("%i", &number);
    neg = 0;
    
    if ( number < 0 )
    {
        neg = 1;
        number = -number;
    }
    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while ( number != 0 );
    
    if ( neg == 1 )
        printf ("-");

    printf("\n");
    
    return 0;
    
}
