
// Do while (REVERSE Numbers)

#include<stdio.h>

int main()
{
    int i, start, end;
    printf("\n Enter Start number: ");
    scanf("\n%d", &start);

    printf("\n Enter End number: ");
    scanf("\n%d", &end);

    i=start;

    do 
    {
        printf("\n %d",i);
        i--;
    }
    while(i>=end);
}