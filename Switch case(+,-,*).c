#include<stdio.h>

int main()
{
    char choice;
    int num1,num2;

    printf("\nEnter +,-,*,/");
    scanf("%c",&choice);

    printf("\nEnter any Two numbers: ");
    scanf("%d %d",&num1, &num2);

    switch(choice)
    {
        case '+':
        printf("\nAddition is = %d + %d= %d", num1,num2,num1+num2);
        break;

        case '-':
        printf("\nSubstraction is = %d - %d=%d", num1, num2, num1-num2);
        break;

        case '*':
        printf("\nMultiplication is = %d * %d=%d", num1,num2,num1*num2);
        break;

        case '/':
        printf("\nDivision is = %d / %d=%d", num1,num2,num1/num2);
        break;

        default:
        printf("\nInvalid! Try Again");

    }
    return 0;

}