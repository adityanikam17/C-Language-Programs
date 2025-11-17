
// Recursive Function ( 5 Table)

#include<stdio.h>

int table(int n, int i)
{
    if (i>10)
    return 1;

    printf("\n%d * %d = %d",n,i,n*i);
    return table(n,i+1);

}
int main()
{
    int n= 5;
     table(n,1);
    return 0;
}