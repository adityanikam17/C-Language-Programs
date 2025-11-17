
// Parameter passing Total and Average

#include<stdio.h>

void sum(int a, int b, int c, int d, int e);


int main()
{
    int a,b,c,d,e;
    printf("\n Enter the numbers: ");
    scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e);
    sum(a,b,c,d,e);

}

void sum(int a, int b, int c,int d, int e)
{
    int total, avg;
    total = a+b+c+d+e;
    printf("\n Total is : %d",total);

    avg= total/5;
    printf("\n Average is : %d", avg);


}