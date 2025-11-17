
// Parameter passing - Largest number

#include<stdio.h>

void num();

void num()
{
    int a, b;
    printf("\n Enter the number:");
    scanf("%d %d", &a,&b);
    if(a>b)
    {
        printf("\n %d is Largest num",a);

    }
    else
    {
        printf("\n %d is largest num",b);
    }
}

int main()
{

    num();
}