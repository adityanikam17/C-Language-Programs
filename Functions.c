
// Function User defined 

#include<stdio.h>

void add();
void sub();

int main()
{
    add();
    sub();
}

void add()
{
    int a=5, b=10, add;
    add=a+b;
    printf("\n Addition is : %d", add);
}

void sub()
{
    int a=5, b=10, sub;
    sub=b-a;
    printf("\n Substraction is : %d", sub);
}