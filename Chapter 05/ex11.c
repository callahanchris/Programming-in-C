// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, right_digit, total;
    
    printf("Enter your number.\n");
    scanf("%i", &number);
    
    total = 0;
    
    while ( number != 0 )
    {
        right_digit = number % 10;
        total += right_digit;
        number = number / 10;
    }
    
    printf("Sum of digits = %i\n", total);
    
    return 0;
    
}
