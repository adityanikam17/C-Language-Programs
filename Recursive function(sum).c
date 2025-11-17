
// Recursive Functions (Sum of a number)

#include<stdio.h>

int sum(int n)
{
    if(n==0)
    return 0;
    else
    return(n+(sum)(n-1));

}
int main()
{
    int num, s;
    printf("Enter the number");
    scanf("%d",&num);
    s=sum(num);

    printf("Sum of %d = %d", num,s);
    return 0;
}