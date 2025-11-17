
// For loop ( Factorial of 4)

#include<stdio.h>

int main()
{
    int i, no=4, fact=1;

    for (i=1; i<=no; i++)
    {
        fact=fact*i;
    }
    printf("\n Factorial of no is: %d", fact);
    return 0;
}