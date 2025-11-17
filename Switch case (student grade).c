
// Switch Case 

#include<stdio.h>

int main()
{
    char choice;
    printf("\nEnter your choice");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'A':
        printf("\nStudent have A grade");
        break;

        case 'B':
        printf("\nStudent have B grade");
        break;

        case 'C':
        printf("\nStudent have C grade");
        break;

        default:
        printf("\nInvalid choice");

    }
    return 0;

}