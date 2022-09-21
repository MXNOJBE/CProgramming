
#include <stdio.h>
struct data
{
	char name[30];
	char department[30];
	char DOB[10];
	char DOJ[20];
	int salary;
};
struct data d[10];
void read()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		system("cls");
		printf("\n------------------Collecting Employe salary------------------");
		printf("\nEnter the name of the Employee  : ");
		scanf("\n");
		gets(d[i].name);
		printf("\nEnter the Employee's Department : ");
		scanf("\n");
		gets(d[i].department);
		printf("\nEnter the Date of birth         : ");
		scanf("\n");
		gets(d[i].DOB);
		printf("\nEnter the Date of Joining       : ");
		scanf("\n");
		gets(d[i].DOJ);
		printf("\nENter the basic Salary          : ");
		scanf("\n");
		scanf("%d", &d[i].salary);
	}
}
void display()
{
	int i, j;
	int allowance, deduction;
	char nets[10];
	printf("\n------------------Employee Details------------------");
	for (j = 0; j < 2; j++)
		printf("\n%d.%s", j + 1, d[j].name);
	printf("\nEnter the Choice:  ");
	scanf("%d", &i);
	i = i - 1;
	allowance = 0.15 * d[i].salary + 0.1 * d[i].salary + 2500;
	printf("\nEmploye Name         : %s", d[i].name);
	printf("\nEmploye Department   : %s", d[i].department);
	printf("\nEmploye DOB          : %s", d[i].DOB);
	printf("\nEmploye DOJ          : %s", d[i].DOJ);
	printf("\nEmploye Basic Salary : %d", d[i].salary);
	printf("\nAllowance            : %d", allowance);
	printf("\nEmploye Total Pay    : %d", d[i].salary + allowance);
	printf("\nDeductions           : 2400");
	printf("\nNet Payment           : %d", d[i].salary + allowance - 2400);
	printf("\n\nPress Enter to go Back to menu");
	scanf("\n");
	gets(nets);
}
void main()
{
	int choice;
menu:
	system("cls");
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
	goto menu;
}
