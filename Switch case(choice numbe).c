
// Switch Case 

#include<stdio.h>

int main()
{
    int number;
    printf("\nEnter the the number");
    scanf("%d", &number);
    switch(number)
    {
        case 1:
        printf("\nEntered number is equal to 1");
        break;

        case 2:
        printf("\nEntered number is equal to 2");
        break;

        case 3:
        printf("Entered number is equal to 3");
        break;

        default:
        printf("\nInvalid Choice");

    }
    return 0;
}