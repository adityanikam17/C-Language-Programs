
// Nested For loop ( Row and Columns )

#include<stdio.h>

int main()
{
    int i, j, row, column;
    printf("\nEnter value of Row: ");
    scanf("%d", &row);
    printf("\nEnter value of Column: ");
    scanf("%d", &column);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=column; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}