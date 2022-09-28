#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
	char sname[20];
	int ch;
	unsigned long int isbn;
} ep[10];
int main()
{
	int choice, cont, quan, arr, i, flag = 1, flag2 = 1, creg, dreg, nstu, d, volncount = 0, headcount = 0, stucount = 0;
	printf("\n\n\t********************************** EMPLOYEE DB ***************************************\n\n");
	printf("\nEnter the total number of Employee :");
	scanf("%d", &stud);
	FILE *fptr, *fptr2, *fptr3, *fptr4, *fptr5;
	do
	{
		printf("\n1. Enter the Details of Employees");
		printf("\n2. Display all Employee");
		printf("\n3. Promote Employee to Team Lead");
		printf("\n4. Depromote Employee to Developer ");
		printf("\n5. Add new Employee");
		printf("\n6. Report");
		printf("\n7. Exit");
		printf("\n\nEnter Choice :");
		scanf("%d", &choice);
		if (choice == 1)
		{
			fptr = fopen("EmployeeDB.txt", "w");
			if (fptr == NULL)
			{
				printf("\nError! opening file");
				exit(0);
			}
			printf("\n_____________________________________________________");
			for (i = 1; i <= stud; i++)
			{
				printf("\n Enter the Employee Name                  : ");
				scanf("\n");
				gets(ep[i].sname);
				printf("\n Enter 1 for Developer and 2 for TeamLead    : ");
				scanf("%d", &ep[i].ch);
				printf("\n Enter the ID Number               : ");
				scanf("%d", &ep[i].reg);
				printf("\n Enter the  phone number                 : ");
				scanf("%d", &ep[i].snumber);
				fwrite(&st, sizeof(struct gate), 1, fptr);
				printf("\n_____________________________________________________");
			}
		}
		else if (choice == 2)
		{
			fptr2 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "r");
			for (i = 1; i <= stud; i++)
			{
				fread(&ep, sizeof(struct gate), 1, fptr);
				printf("\n Student Name         : %s\n", st[i].sname);
				if (ep[i].ch == 1)
				{
					printf("\n Role  	              : Volunteer\n");
				}
				else if (ep[i].ch == 2)
				{
					printf("\n Role    	      : Team Head\n");
				}
				else
					printf("\nInvalid Role");
				printf("\n Register Number      : %d\n", ep[i].reg);
				printf("\n Phone Number         : %d\n", ep[i].snumber);
				printf("\n_____________________________________________________");
			}
		}
		else if (choice == 3)
		{
			fptr3 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "a");
			for (i = 1; i <= stud; i++)
			{
				fread(&st, sizeof(struct gate), 1, fptr);
				if (ep[i].ch == 1)
				{
					printf("\n Student Name             : %s", ep[i].sname);
					printf("\n Role                     : Volunteer");
					printf("\n Register Number          : %d", ep[i].reg);
				}
			}
			printf("\n_____________________________________________________");
			printf("\nEnter the student Register Number to promote : ");
			scanf("%d", &creg);
			// searching
			for (i = 1; i <= stud; i++)
			{
				fptr3 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "a");
				if (creg == ep[i].reg)
				{
					st[i].ch = 2;
					for (i = 1; i <= stud; i++)
					{
						fread(&st, sizeof(struct gate), 1, fptr);
						printf("\n Student Name        : %s", ep[i].sname);
						if (ep[i].ch == 1)
						{
							printf("\n Role        	    : Volunteer");
						}
						else if (ep[i].ch == 2)
							printf("\n Role         	    : Team Head");
						else
							printf("\n No Roles");
						printf("\n_____________________________________________________");
					}
				}
				else
					printf("\nRecord not found");
			}
		}
		else if (choice == 4)
		{
			fptr4 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "a");
			for (i = 1; i <= stud; i++)
			{
				fread(&st, sizeof(struct gate), 1, fptr3);
				if (ep[i].ch == 2)
				{
					printf("\n Student Name             : %s", epi].sname);
					printf("\n Role                     : Team Head");
					printf("\n Register Number          : %d", epi].reg);
				}
			}
			printf("\n_____________________________________________________");
			printf("\nEnter the student Register Number to Depromote : ");
			scanf("%d", &dreg);
			// searching
			for (i = 1; i <= stud; i++)
			{
				fptr4 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "a");
				if (dreg == st[i].reg)
				{
					st[i].ch = 1;
					for (i = 1; i <= stud; i++)
					{
						fread(&st, sizeof(struct gate), 1, fptr3);
						printf("\n Student Name        : %s", st[i].sname);
						if (st[i].ch == 1)
						{
							printf("\n Role        	    : Volunteer");
						}
						else if (st[i].ch == 2)
							printf("\nRole         	    : Team Head");
						else
							printf("\n No Roles");
						printf("\n_____________________________________________________");
					}
				}
				else
					printf("\nRecord Not found");
			}
		}
		else if (choice == 5)
		{
			printf("\n_____________________________________________________");
			printf("Enter the number of new Students :");
			scanf("%d", &nstu);
			fptr5 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "a");
			d = stud;
			stud = stud + nstu;
			for (i = d + 1; i <= stud; i++)
			{

				printf("\n Enter the Student Name                  : ");
				scanf("\n");
				gets(st[i].sname);
				printf("\n Enter 1 for volunteer and 2 for head    : ");
				scanf("%d", &st[i].ch);
				printf("\n Enter the Register Number               : ");
				scanf("%d", &st[i].reg);
				printf("\n Enter the  phone number                 : ");
				scanf("%d", &st[i].snumber);
				fwrite(&st, sizeof(struct gate), 1, fptr);
				printf("\n_____________________________________________________");
			}
		}
		else if (choice == 6)
		{
			printf("\n____________Report_of_Students_@_Gayeways______________\n ");
			printf("\n Deatils of all Students");

			fptr2 = fopen("C:/Users/Yogisha K/Desktop/App/Files/Gateways.txt", "r");
			for (i = 1; i <= stud; i++)
			{
				fread(&st, sizeof(struct gate), 1, fptr);
				stucount++;
				if (st[i].ch == 1)
				{
					volncount++;
				}
				else if (st[i].ch == 2)
				{
					headcount++;
				}
				else
					printf("\nInvalid Role");

				printf("\n_____________________________________________________");
			}
			printf("\nTotal Number of students = %d", stucount);
			printf("\nTotal Number of Volunteers = %d", volncount);
			printf("\nTotal Number of Team Heads = %d", headcount);
		}
		else if (choice == 7)
		{
			exit(0);
		}
		printf("\n\nDo you want to continue (1/0):");
		scanf("%d", &cont);
	} while (cont == 1);
	fclose(fptr);
	return 0;
}
