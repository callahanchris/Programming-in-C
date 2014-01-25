/* Program to evaluate simple expressions of the form
    number operator number                              */
    
#include <stdio.h>

int main (void)
{
    float value1, acc;
    char operator;
    _Bool onoff = 1;
    acc = 0;

    printf ("Type in your expression.\n");    
    while ( onoff == 1 )
    {
    scanf ("%f %c", &value1, &operator);
        switch (operator)
        {
            case 'S':
                acc = value1;
                printf ("= %f\n", acc);
                break;
            case '+':
                acc += value1;
                printf ("= %f\n", acc);
                break;
            case '-':
                acc -= value1;
                printf ("= %f\n", acc);
                break;
            case '*':
                acc *= value1;
                printf ("= %f\n", acc);
                break;
            case '/':
                if ( value1 == 0 )
                    printf ("Division by zero.\n");
                else
                    acc /= value1;
                    printf ("%f\n", acc);
                break;
            case 'E':
                printf ("= %f\n", acc);
                printf ("End of Calculations.\n");
                onoff = 0;
                break;
            default:
                printf ("Unknown operator.\n");
                break;
        } 
    }   
     
    return 0;             
}
