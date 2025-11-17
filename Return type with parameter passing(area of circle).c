
// Function with return type with parameter passing (area of circle)

#include<stdio.h>

float circle(int r);

float circle(int r)
{
    float area, pie=3.14;
    area=pie*r*r;
    return area;
}

int main()
{
    float ans, r=5;
    ans=circle(r);

    printf("Area of Circle is : %f",ans);
}