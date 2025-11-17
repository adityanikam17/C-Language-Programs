
// Return type without parameter passing (area of circle)

#include<stdio.h>

float circle()
{
    float area,pie=3.14, r=4;
    area=pie*r*r;
    return area;
}

int main()
{
    printf("Area of Circle is : %f",circle());
}