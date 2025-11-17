
// Function with return type with parameter passing

#include<stdio.h>

float rectangle(int a, int b);

float rectangle(int a, int b)
{
    float area;
    area=a*b;           // l*b
    return area;
}

int main()
{
    float ans, a=5, b=8;
    ans=rectangle(a,b);

    printf("Area of Rectangle is : %f",ans);
}
