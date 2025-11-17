
// Pointers

#include<stdio.h>

int main()
{
    int i=5, *ptr;
    ptr=&i;


    printf("\n Value of i is : %d", i);

    printf("\n memory address of i is : %u", &i);

    printf("\n Pointer of pt is : %u", ptr);

    printf("\n Value pointer of pt is : %d", *ptr);
}