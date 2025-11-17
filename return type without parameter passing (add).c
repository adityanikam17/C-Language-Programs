
// Return type without parameter passing (add)

#include<stdio.h>

int add();

int add()
{
    int a=6, b=8, add;
    add=a+b;
    return add;
}

int main()
{
    int ans;
    ans=add();
    printf("Addition is : %d",ans);
    return 0;
}