#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct gate
{
	char sname[20];
	int ch;
	unsigned int reg;
	unsigned long int snumber;
} st[10];
int main()
{
	int choice, cont, stud, arr, i, flag = 1, flag2 = 1, creg, dreg, nstu, d, volncount = 0, headcount = 0, stucount = 0;
	printf("\n\n\t********************************** GDSC DATABASE ***************************************\n\n");
	printf("\nEnter the total number of Students :");
	scanf("%d", &stud);
	FILE *fptr, *fptr2, *fptr3, *fptr4, *fptr5;
	do
	{
		printf("\n1. Enter the Details of Students for Gateways");
		printf("\n2. Display all Student details of gateways");
		printf("\n3. Promote Volunteer to Core Member");//update
		printf("\n4. Depromote Core Member to Volunteer");
		printf("\n5. Add new Volunteer");
		printf("\n6. Report");
		printf("\n7. Exit");
		printf("\n\nEnter Choice :");
		scanf("%d", &choice);
		if (choice == 1)
		{
			fptr = fopen("GDSC.txt", "w");
			if (fptr == NULL)
			{
				printf("\nError! opening file");
				exit(0);
			}
			printf("\n_____________________________________________________");
			for (i = 1; i <= stud; i++)
			{
				printf("\n Enter the Student Name : ");
				scanf("\n");
				gets(st[i].sname);
				printf("\n Enter 1 for volunteer and 2 for Core Member : ");
				scanf("%d", &st[i].ch);
				printf("\n Enter the Register Number : ");
				scanf("%d", &st[i].reg);
				printf("\n Enter the phone number : ");
				scanf("%d", &st[i].snumber);
				fwrite(&st, sizeof(struct gate), 1, fptr);
				printf("\n_____________________________________________________");
			}
		}
		else if (choice == 2)
		{
			fptr2 = fopen("GDSC.txt", "r");
			for (i = 1; i <= stud; i++)
			{
				fread(&st, sizeof(struct gate), 1, fptr);

				printf("\n Student Name : %s\n", st[i].sname);
				if (st[i].ch == 1)
				{
					printf("\n Role : Volunteer\n");
				}
				else if (st[i].ch == 2)
				{
					printf("\n Role : Core Member\n");
				}
				else
					printf("\nInvalid Role");
				printf("\n Register Number : %d\n", st[i].reg);
				printf("\n Phone Number : %d\n", st[i].snumber);
				printf("\n_____________________________________________________");
			}
		}
		else if (choice == 3)
		{
			fptr3 = fopen("GDSC.txt", "a");
			for (i = 1; i <= stud; i++)
			{
				fread(&st, sizeof(struct gate), 1, fptr);
				if (st[i].ch == 1)
				{
					printf("\n Student Name : %s", st[i].sname);
					printf("\n Role : Volunteer");
					printf("\n Register Number : %d", st[i].reg);
				}
			}
			printf("\n_____________________________________________________");
			printf("\nEnter the student Register Number to promote : ");
			scanf("%d", &creg);
			// searching
			for (i = 1; i <= stud; i++)
			{
				fptr3 = fopen("GDSC.txt", "a");
				if (creg == st[i].reg)
				{
					st[i].ch = 2;
					for (i = 1; i <= stud; i++)
					{
						fread(&st, sizeof(struct gate), 1, fptr);
						printf("\n Student Name : %s", st[i].sname);
						if (st[i].ch == 1)
						{
							printf("\n Role : Volunteer");
						}
						else if (st[i].ch == 2)
							printf("\n Role : Core Member");
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
			fptr4 = fopen("GDSC.txt", "a");
			for (i = 1; i <= stud; i++)
			{
				fread(&st, sizeof(struct gate), 1, fptr3);
				if (st[i].ch == 2)
				{
					printf("\n Student Name : %s", st[i].sname);

					printf("\n Role : Core Member");
					printf("\n Register Number : %d", st[i].reg);
				}
			}
			printf("\n_____________________________________________________");
			printf("\nEnter the student Register Number to Depromote : ");
			scanf("%d", &dreg);
			// searching
			for (i = 1; i <= stud; i++)
			{
				fptr4 = fopen("GDSC.txt", "a");
				if (dreg == st[i].reg)
				{
					st[i].ch = 1;
					for (i = 1; i <= stud; i++)
					{
						fread(&st, sizeof(struct gate), 1, fptr3);
						printf("\n Student Name : %s", st[i].sname);
						if (st[i].ch == 1)
						{
							printf("\n Role : Volunteer");
						}
						else if (st[i].ch == 2)
							printf("\nRole : Core Member");
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
			// printf("\n_____________________________________________________");
			printf("Enter the number of new Students :");
			scanf("%d", &nstu);
			fptr5 = fopen("GDSC.txt", "a");
			d = stud;
			stud = stud + nstu;
			for (i = d + 1; i <= stud; i++)
			{
				printf("\n Enter the Student Name : ");
				scanf("\n");
				gets(st[i].sname);
				printf("\n Enter 1 for volunteer and 2 for head : ");
				scanf("%d", &st[i].ch);
				printf("\n Enter the Register Number : ");
				scanf("%d", &st[i].reg);
				printf("\n Enter the phone number : ");
				scanf("%d", &st[i].snumber);
				fwrite(&st, sizeof(struct gate), 1, fptr);
				printf("\n_____________________________________________________");
			}
		}
		else if (choice == 6)
		{
			printf("\n____________GDSC REPORT______________\n ");
			printf("\n Deatils of all Students");
			fptr2 = fopen("GDSC.txt", "r");
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
			printf("\nTotal Number of Core Members = %d", headcount);
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