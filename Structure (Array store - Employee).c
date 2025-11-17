
// Structure - Array Store (Employee)

#include<stdio.h>

typedef struct employee
{
    int id;
    char name[20];
    float salary;
    char city[20];
}employee;

void main()
{
    int i,n;
    printf("\nHpw many Employee you want to store: ");
    scanf("%d",&n);

    employee s[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter deatils of employee %d: ",i+1);
        printf("\nEnter Employee ID: ");
        scanf("%d",&s[i].id);
        printf("\nEnter Name: ");
        scanf("%s",&s[i].name);
        printf("\nEnter salary: ");
        scanf("%2f",&s[i].salary);
        printf("\nEnter city: ");
        scanf("%s",&s[i].city);
    }

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d details are: ",i+1);
        printf("\nEmployee ID: %d", s[i].id);
        printf("\nEmployee name: %s",s[i].name);
        printf("\nEmployee Salary: %2f", s[i].salary);
        printf("\nEmployee City: %s ", s[i].city);

    }


}