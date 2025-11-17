
// Structure - Number and Letter 

#include<stdio.h>

struct myStructure
{
    int myNum;
    char myLetter;

};
int main()
{
    struct myStructure s1;
    s1.myNum=10;
    s1.myLetter= 'A';

    printf("\nMy number: %d",s1.myNum);
    printf("\nMy letter: %c",s1.myLetter);

    return 0;
}