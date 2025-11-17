
// Pointers - Add

#include<stdio.h>

int main()
{
    int a,b, *ptr1,*ptr2, add;
    ptr1=&a;
    ptr2=&b;

    printf("\n Enter the vlue for a and b");
    scanf("%d %d", &a,&b);

    add= (*ptr1)+(*ptr2);

    printf("\n Addition of a and b is : %d", add);
}