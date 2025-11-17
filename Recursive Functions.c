
// Recursive Functions

#include<stdio.h>

int factorial(int n)
{
    if (n==0)
    return 1;
    else
    return (n*factorial(n-1));

}
int main()
{
    int num, f;
    printf("Enter the number");
    scanf("%d", &num);
    f=factorial(num);
    
    printf("Factorial of %d = %d", num,f);
    return 0;
}