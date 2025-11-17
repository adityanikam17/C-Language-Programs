
// Do While ( 1 To 10 )

#include<stdio.h>

int main()
{
    int i, no;
    printf("\nEnter the number: ");
    scanf("%d", &no);
    i=1;

    do
    {
        printf("\n%d",i);
        i++;
    }
    while(i<=no);
    return 0;
}