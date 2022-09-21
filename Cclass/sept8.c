#include <stdio.h>

struct employee
{
    char name[50];
    char department[50];
    char dob[50];
    char djoin[50];
    int basicsalary;
};
int i, netpay[10], totalpay[10], allowances[10], Dearness_Allowance[10], House_rent_allowance[10], Research_Allowance[10];
float basic[10];
struct employee st[10];
void read()
{
    printf("Enter the data of 10 emoloyees");
    for (i = 0; i < 1; i++)
    {
        printf("\nEnter Name of employee %d :", i + 1);
        scanf("%s", &st[i].name);
        printf("Enter Department of employee %d :", i + 1);
        scanf("%s", &st[i].department);
        printf("Enter Date of birth of employee %d :", i + 1);
        scanf("%s", &st[i].dob);
        printf("Enter Date of joining of employee %d :", i + 1);
        scanf("%s", &st[i].djoin);
        printf("Enter basic salary of employee %d :", i + 1);
        scanf("%d", &st[i].basicsalary);
    }
}
void display()
{
    for (i = 0; i < 1; i++)
    {

        Dearness_Allowance[i] = (1.5 * st[i].basicsalary);
        House_rent_allowance[i] = (0.1 * st[i].basicsalary);
        Research_Allowance[i] = 2500;
        allowances[i] = (Dearness_Allowance[i] + House_rent_allowance[i] + Research_Allowance[i]);
        totalpay[i] = (st[i].basicsalary + allowances[i]);
        netpay[i] = (totalpay[i] - 2400);

        printf("\nEmployee Name: %s\n", st[i].name);
        printf("\nDepartment of the Employee: %s\n", st[i].department);
        printf("\nDearness Allowance of %s is %d\n", st[i].name, Dearness_Allowance[i]);
        printf("\nHouse rent allowance of %s is %d\n", st[i].name, House_rent_allowance[i]);
        printf("\nResearch allowance is of %s is %d \n", st[i].name, Research_Allowance[i]);
        printf("\nTotal pay of %s is %d \n", st[i].name, totalpay[i]);
        printf("\nAfter Dedcutions of Provident Fund - Rs. 2200 and Professional Tax - Rs 200");
        printf("\nNet pay of %s is %d \n", st[i].name, netpay[i]);
    }
}
void main()
{
    int choice;
apc:
    printf("~~~~~~~~~~~Department of Management~~~~~~~~~~~~");
    printf("\n1.Read the Employees Data");
    printf("\n2.Display the Employee Data");
    printf("\n3.Exit");
    printf("\nEnter Your choice : ");
    scanf("%d", &choice);
    if (choice == 1)
        read();
    else
        display();
    goto apc;
}
