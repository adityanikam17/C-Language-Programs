
// Pointers- swapping numbers using pointers 

#include<stdio.h>
void main()
{
    int a=10,b=20,c;
    printf("\nValues before swap a=%d, b=%d",a,b);
    c=a;
    a=b;
    b=c;

    int* p;
    int* q;
    int* r;

    p=&a;
    q=&b;
    r=&c;

    printf("\nValue after swap p=%d, q=%d, r=%d",a,b,c);

}