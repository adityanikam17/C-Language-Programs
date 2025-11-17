
// Function with return type and parameter passing(add)

#include<stdio.h>

int add(int a, int b);

int add(int a, int b)
{
    int add;
    add=a+b;
    return add;

}

int main()
{
    int ans, a=6, b=8;
    ans=add(a,b);
    printf("Addition is : %d", add(a,b));
    return 0;
}