
// File Handling - Read 

#include<stdio.h>
void main()
[
    int age;
    char name[20];

    FILE* fptr;

    fptr = fopen("Aditya.txt","r");

    fscanf(fptr, "%d %s", &age, &name);

    printf("\n%s \n%d", name, age);

    fclose(fptr);
]