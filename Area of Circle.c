#include<stdio.h>

int main()
{
    int r;
    float pie= 3.14;
    float area, peri;

    printf("\n Enter r : ");
    scanf("%d", &r);

    area= pie*(r*r);
    peri= 2*pie*r ;

    printf("\n Area of circle is : %2f", area);
    printf("\n Perimeter of circle is : %2f", peri);

    return 0;
}