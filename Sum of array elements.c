
//Array (Sum of array elements)

#include<stdio.h>

int main()
{
    int a[5], i, sum=0;

    printf("\n Enter the Array Elements:\n");

    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    printf("\n Sum of array elements is: %d", sum);
}