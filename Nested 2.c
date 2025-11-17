
// Nested if else 

#include<stdio.h>

int main()
{
    int age;
    printf("\n Enter the Age: ");
    scanf("%d", &age);

    if(age<=40)
    {
        printf("\n Your age is below 40");
        if(age>=18)
        {
            printf("\n Elligibe for work");
        }
        else
        {
            printf("\n Not elligible for work");
        }
    }
    else
    {
        printf("\n Age criteria is not capable to work");
    }
    return 0;
}