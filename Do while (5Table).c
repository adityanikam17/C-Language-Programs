
// Do While (5 Table)

#include<stdio.h>

int main()
{
    int i, start, end;
    printf("\n Enter Start and End Number");
    scanf("\n%d %d", &start, &end);
    i=start;

    do
    {
        printf("\n %d", i);
        i+=5;

    }
    while(i<=end);
    return 0;
}