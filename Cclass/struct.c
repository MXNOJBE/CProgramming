#include <stdio.h>
struct address
{
    int street;
    char state[20];
    char city[20];
    char country[20];
};

struct Student
{
    char name[20];
    int stu_id;
    char program[10];
    int prog_duration;
    struct address add;
};

int main()
{
    struct Student s1;
    printf("Enter the name of the student: ");
    scanf("%s", s1.name);
    printf("Enter the id of the student: ");
    scanf("%d", &s1.stu_id);
    printf("Enter the name of the Program: ");
    scanf("%s", s1.program);
    printf("Enter the Program duration: ");
    scanf("%d", &s1.prog_duration);
    printf("Student name is:%s ", s1.name);
    printf("\nStudent ID is:%d ", s1.stu_id);
    printf("\nName of the Program is:%s ", s1.program);
    printf("\nProgram duration: %d ", s1.prog_duration);
    printf("\nStreet Number :%d ", s1.add.street);
    printf("\nState Name : %d ", s1.add.state);
    printf("\nCity Name : %d ", s1.add.city);
    printf("\nCountry is : %d ", s1.add.country);
}