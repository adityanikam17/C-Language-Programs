
// File Handling - Remove

#include<stdio.h>
void main()
{
    if(remove("Aditya.txt")==0)
    {
        printf("The file is deeted successfully");

    }
    else
    {
        printf("The file does not exist");
    }
}