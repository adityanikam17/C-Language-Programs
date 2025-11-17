#include<stdio.h>

int main()
{
    int si;
    int p, r, n;

    printf("\n Enter Principle: ");
    scanf("%d", &p);

    printf("\n Enter Rate of Interest: ");
    scanf("%d", &r);

    printf("\n Enter no. of years:");
    scanf("%d", &n);

    si= (p*r*n)/100;

    printf("\n Simple Interest is : %d ", si);

    return 0;
    


}