#include<stdio.h>
#include<stdlib.h>
int n;
struct response
{
	char name[50];
	int age,dosecount,affectedcount,dosetwoaffected;
	char sex[10];
}rs[20];

void takedata()
{
	FILE *fptr;
	int i;
	fptr = fopen("data.bin","wb+");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Name of the patient: ");
		scanf("%s",&rs[i].name);
		printf("Enter Age of the patient: ");
		scanf("%d",&rs[i].age);
		printf("Enter Gender of the patient: ");
		scanf("%s",&rs[i].sex);
		printf("Enter Number of doeses taken of the patient: ");
		scanf("%d",&rs[i].dosecount);
		printf("Enter the num of times affected: ");
		scanf("%d",&rs[i].affectedcount);
		printf("Enter the times affected after second dose , Enter zero if not taken: ");
		scanf("%d",&rs[i].dosetwoaffected);	
	}
	fclose(fptr);
}


void display()
{
	FILE *fptr;
	int i;
	printf("\tNAME\tSEX\tAGE\tDOSECOUNT\tDOSETWOAFFECTED");
	fptr = fopen("data.bin","wb+");
	for(i=0;i<n;i++)
	{
		printf("\n\t%s\t%s\t%d\t%d\t\t%d",rs[i].name,rs[i].sex,rs[i].age,rs[i].dosecount,rs[i].dosetwoaffected);	
	}
	fclose(fptr);
}

void doubledosecount()
{
FILE *fptr;
	int i;
	fptr = fopen("data.bin","wb+");
	printf("\tNAME\tSEX\tAGE\tDOSECOUNT\tDOSETWOAFFECTED");
	for(i=0;i<n;i++)
	{
		
		if(rs[i].dosetwoaffected == 0)
		{
		printf("\n\t%s\t%s\t%d\t%d\t\t%d",rs[i].name,rs[i].sex,rs[i].age,rs[i].dosecount,rs[i].dosetwoaffected);	
		}
		}
	fclose(fptr);	
}
void male()   
{
	FILE *fptr;
	int i;
	char gen[] = "m";
	fptr = fopen("data.bin","wb+");
	printf("\tNAME\tSEX\tAGE\tDOSECOUNT\tDOSETWOAFFECTED");
	for(i=0;i<n;i++)
	{
		
		if(strcmp(rs[i].sex,gen)==0 && rs[i].age>=25 && rs[i].dosetwoaffected == 0)
		{
		printf("\n\t%s\t%s\t%d\t%d\t\t%d",rs[i].name,rs[i].sex,rs[i].age,rs[i].dosecount,rs[i].dosetwoaffected);	
		}
		else
		{
			printf("\nNo Record Found");
		}
	}
	fclose(fptr);
	
}

int main()
{
	int choice;
	printf("\nEnter the number of patients: ");
	scanf("%d", &n);
loop:
	printf("\n1.TakeData()");
	printf("\n2.Display()");
	printf("\n3.Doublledosecount");
	printf("\n4.Male");
	printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
	if(choice == 1)
	{
		takedata();
	}
	else if(choice == 2)
	{
		display();
	}
	else if(choice == 3)
	{
		doubledosecount();
	}
	else if(choice == 4)
	{
		male();
	}
	goto loop;
}
