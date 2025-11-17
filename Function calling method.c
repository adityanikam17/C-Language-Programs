
// Function calling method = call by value , call by reference

#include<stdio.h>


void add(int *a)
{
    *a=*a+10;

}

int main()
{
    int a =10;
    printf("\n Before function call value of a is : %d", a);
    add(&a);
    printf("\n After function call value of a is : %d", a);
}



/*
void add(int *, int *);

int main()
{
    int a=20, b=10;
    add(&a,&b);

}

void add(int *a, int *b)
{
    int c;
    c= *a + *b;
    printf("\n Addition is : %d", c);

}
*/