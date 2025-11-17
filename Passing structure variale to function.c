
// Structure - Passing structure variable to function

#include<stdio.h>

typedef struct student
{
    int roll;
    char name[20];
} student;

void display(student);
student storedata(student);

void main()
{
    student s1, s2, s3;

    printf("\nEnter data for 1st student");
    s1 = storedata(s1);
    printf("\nDetails of 1st student");
    display(s1);

    printf("\nEnter data for 2nd student");
    s2 = storedata(s2);
    printf("\nDetails of 2nd student");
    display(s2);

    printf("\nEnter data for 3rd student");
    s3 = storedata(s3);
    printf("\nDetails of 3rd student");
    display(s3);
}
void display(student s)
{
    printf("\nRoll no is %d:", s.roll);
    printf("\nName is %s",s.name);
}
student storedata(student s)
{
    printf("\nEnter roll no:");
    scanf("\n%d",&s.roll);

    printf("\nEnter name:");
    scanf("%s",&s.name);

    return s;
}