#include <stdio.h>
// to store following details of 5 students : name,regno,marks of each subject,total,avg
// read values of 5 students
// diplay value
// print progress report(name,marks of each subject,total,avg)
struct student
{
    char name[50];
    int regno;
    int marks;
};

int main()
{
    int marks[50], i, j, choice;
    for (i = 0; i < 2; i++)
    {
        struct student s1;
        printf("Enter the name of the student %d: ", i + 1);
        scanf("%s", s1.name);
        printf("Enter the regno of the student %d: ", i + 1);
        scanf("%d", &s1.regno);
        for (j = 0; j < 2; j++)
        {
            printf("Enter the marks of the subject %d: ", j + 1);
            scanf("%d", &marks[j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        struct student s1;
        printf("\nThe name of the student is %s", s1.name);
        printf("\nThe regno of the student: %d ", s1.regno);
        for (j = 0; j < 2; j++)
        {
            printf("\nMarks of the subject: %d ", marks[j]);
        }
    }
}