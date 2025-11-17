// File Handling - Write 

#include<stdio.h>
void main()
{
    FILE* fp;

    int roll;
    char name[20];

    fp = fopen("Aditya.txt", "w");

    printf("Enter Roll no and Name : ");
    scanf("%d %s", &roll, &name);

    fprintf(fp,"\n%d", roll);
    fprintf(fp,"\n%s", name);

    fprintf(fp,"\n ROll : 28");
    fprintf(fp,"\n Name : Darshana");

    fclose(fp);
}