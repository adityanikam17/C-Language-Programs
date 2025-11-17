#include<stdio.h>

int main()
{
    int no, rem, sum=0;
    printf("\nEnter the digit: ");
    scanf("%d",&no);
    int temp=no;
    while(no!=0)
    {
        rem=no%10;
        sum=(sum*10)+rem;
        no=no/10;

    }
    printf("\n sum is: %d",sum);
   
    if(temp==sum)
    printf("\nNumber is Pallindrome");

    else 
    printf("\nNumber is Not Pallindrome");

    return 0;

}