
// File Handling - Append

#include<stdio.h>
void main()
{
    int num;
    char name[20];

    FILE* fptr;

    fptr = fopen("Aditya(file handling).txt", "a");

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Enter Name : ");
    scanf("%s", &name);

    //fprintf(fptr,"\n%d", num);
    //fprintf(fptr,"\n%s", name);

    fprintf(fptr,"\n%d \n%s", num,name);

    fclose(fptr);

}