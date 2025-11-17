
// Structure 

#include<stdio.h>
#include<string.h>

struct Student
{
    int roll;
    char name[20];
    int id;
    int age;
    char city[10];
    
};
void main()
{
    struct Student s1, s2, s3,s4;
    
    s1.roll=5;
    strcpy(s1.name,"Nikhil");
    s1.id=1005;
    s1.age=20;
    strcpy(s1.city,"Hyderabad");

    s2.roll=10;
    strcpy(s2.name,"Ujwal");
    s2.id=1010;
    s2.age=21;
    strcpy(s2.city,"Mumbai");

    s3.roll=15;
    strcpy(s3.name,"Jay");
    s3.id=1015;
    s3.age=23;
    strcpy(s3.city,"Rajasthan");

    s4.roll=20;
    strcpy(s4.name,"Aditya");
    s4.id=1020;
    s4.age=22;
    strcpy(s4.city,"Nashik");


    printf("\n%s",s1.name);
    printf("\n%s",s2.name);
    printf("\n%s",s3.name);
    printf("\n%s",s4.name);

}