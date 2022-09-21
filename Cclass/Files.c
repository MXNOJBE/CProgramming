#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int regno;
	char name[15];
	char program[14];
};

int main()
{
	int n;
	FILE *fptr;
	struct student std;
	fptr = fopen("D:\\MCA\\1SEM\\c Lang\\Lab\\data.bin","wb");
	if (fptr==NULL)
	{
		printf("ERROR! opening file");
		exit(1);
	}
	for(n=1;n<5;++n)
	{
		printf("\nEnter the Register number : ");
		scanf("%d",&std.regno);
		printf("\nEnter the name of the student : ");
		scanf("%s",std.name);
		printf("\nEnter the program of the student : ");
		scanf("%s",std.program);
		fwrite(&std,sizeof(struct student),1,fptr);
	}
	fclose (fptr);
	return 0;
}



#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int regno;
	char name[15];
	char program[14];
};
int main()
{
	int n;
	FILE *fptr;
	struct student std;
	fptr = fopen("D:/MCA/1SEM/c Lang/Lab/data.bin","rb");
	if (fptr==NULL)
	{
		printf("ERROR! opening file");
		exit(1);
	}
	for(n=1;n<5;++n)
	{
		fread(&std,sizeof(struct student),1,fptr);
		printf("\n%d\t%s\t%s",std.regno,std.name,std.program);
		
	}
	fclose (fptr);
	return 0;
}

