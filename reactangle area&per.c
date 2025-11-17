#include<stdio.h>

int main()
{
    int len, bre, area, peri;

    printf("\n Enter Length: ");
    scanf("%d", &len);
    printf("\n Enter Breadth: ");
    scanf("%d", &bre);

    area=len*bre;
    peri=2*(len+bre);

    printf(" \n Area of Rectangle is : %d", area);
    printf(" \n Perimeter of Rectangle is : %d", peri);

    return 0;
}