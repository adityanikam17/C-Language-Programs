
// Reverse while loop

#include<stdio.h>

int main()
{
    int no, rem, sum=0;                //rem= remainder
    printf("\nEnter any digit: ");
    scanf("%d",&no);
    
    printf("\nReverse number is: ");
    while(no!=0)
    {
        rem= no%10;
        sum=(sum*10)+rem;
        no=no/10;
    }
    printf("\nReverse of Given digits is: %d", sum);
    return 0;
}