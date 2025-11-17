#include<stdio.h>

int main()
{
    int base, height;
    float area;
    
    printf("\n Enter the Base: ");
    scanf("%d", &base);

    printf("\n Enter the Height: ");
    scanf("%d", &height);

    area=0.5*(base*height);

    printf("\n Area of Triangle is : %.2f", area);

    return 0;
}