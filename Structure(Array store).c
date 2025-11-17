
// Structure- Array storing

#include<stdio.h>
typedef struct student 
{
    int roll;
    char name[20];
    float marks;
}student;

void main()
{
    int i,n;

    printf("\nEnter how many students you want to store:");
    scanf("%d",&n);

    student s[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d: ",i+1);
        printf("\nEnter the roll number: ");
        scanf("%d",&s[i].roll);
        printf("\nEnter Name: ");
        scanf("%s",&s[i].name);
        printf("\nEnter Marks: ");
        scanf("%d",&s[i].marks);
    }

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d details are : ", i+1);
        printf("\nRoll number is %d", s[i].roll);
        printf("\nName is %s", s[i].name);
        printf("\nMarks are %2f", s[i].marks);
    }
}