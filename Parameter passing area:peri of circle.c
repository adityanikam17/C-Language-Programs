
// Parameter Passing - Area and perimeter of Circle

#include<stdio.h>

void area(int r);
void peri(int r);

void area(int r)
{
    float pie=3.14;
    float area;
    
    area=pie*r*r;
    printf("\n Area of circle is: %.2f", area);
   
}

void peri(int r)
{
    float pie=3.14;
    float peri;

    peri=2*pie*r;
    printf("\n Perimeter of circle is: %.2f", peri);
}

int main()
{
    int r;
    printf("\n Enter radius: ");
    scanf("%d", &r);
    area(r);
    peri(r);

}