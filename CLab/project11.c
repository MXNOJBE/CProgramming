#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;

struct patient
{
    int age;
    char name[50];
    char gender[5];

} pt[15];

void details()
{
    int i;
    FILE *fptr;
    fptr = fopen("patients.bin", "wb+");
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the patient: ");
        scanf("%s", &pt[i].name);
        printf("\nEnter the age of the patient: ");
        scanf("%d", &pt[i].age);
        printf("\nEnter the gender of that patient: ");
        scanf("%s", &pt[i].gender);
    }
    fclose(fptr);
}
void display()
{
    int i;
    FILE *fptr;
    fptr = fopen("patients.bin", "wb+");
    for (i = 0; i < n; i++)
    {
        fread(&pt, sizeof(struct patient), 1, fptr);
        printf("\n\t%s\t%s\t%d", pt[i].name, pt[i].gender, pt[i].age);
    }
    fclose(fptr);
}
void display2()
{
    int i;
    FILE *fptr;
    fptr = fopen("patients.bin", "wb+");
    char gender[5] = "f";
    printf("\tNAME\tGENDER\tAGE");
    for (i = 0; i < n; i++)
    {
        int val;
        val = strcmp(gender, pt[i].gender);
        if (pt[i].age >= 25 && val == 0)
        {
            printf("\n\t%s\t%s\t%d", pt[i].name, pt[i].gender, pt[i].age);
        }
    }
}


void search()
{
    int i;
    char name1[20];
    FILE *fptr;
    fptr = fopen("patients.bin", "wb+");
    printf("Enter the patients name to be searched: ");
    scanf("%s", &name1);
    for (i = 0; i < n; i++)
    {
        // fread(&pt, sizeof(struct patient), 1, fptr);
        int val, adress = 0;
        val = strcmp(pt[i].name, name1);
        {
            if (val == 0)
            {
                printf("\n\t%s\t%s\t%d", pt[i].name, pt[i].gender, pt[i].age);
            }
        }
    }
}
int main()
{
    int i, choice;
    printf("\nEnter the number of patients: ");
    scanf("%d", &n);
loop:
    printf("\nEnter 1 to patient details");
    printf("\nEnter 2 to display the info");
    printf("\nEnter 3 to Search the patient file with the name and display the details if available");
    printf("\nEnter 4 Display the names of female patients having age 25 or more.");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        details();
    }
    else if (choice == 2)
    {
        display();
    }
    else if (choice == 3)
    {
        search();
    }
    else if (choice == 4)
    {
        display2();
    }

    goto loop;
}
