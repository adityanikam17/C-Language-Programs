
// Array ( Sum of 2 Arrays)

#include<stdio.h>

int main()
{
    int a[5],b[5], i, sum1=0, sum2=0, sum;;

    printf("\n Enter the First array elements:\n");
    for (i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Enter the Second array elements:\n");
    for (i=0; i<=4; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i=0; i<5; i++)
    {
        sum1=sum1 + a[i];
    }
    printf("\n Sum of Array 1 is : %d",sum1);

    for (i=0; i<5; i++)
    {
        sum2=sum2 + b[i];
    }
    printf("\n Sum of Array 2 is : %d",sum2);


    sum=sum1+sum2;
    printf("\n Sum of Both Array elments is : %d", sum);




}