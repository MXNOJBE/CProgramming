
#include<stdio.h>
#include<conio.h>
#include <string.h>
#include<stdlib.h>

struct student 
{
     int regno;
     char name[10];
     char program[30];
};
int main()
{   
    int n;
    struct student std;
    FILE *fptr;
    fptr = fopen("C:\\Users\\MXNOJBE\\Desktop\\C\\program.bin","wb");
    if(fptr == NULL)
    {
        printf("Error!, opening file");
        exit(1);
    }
    printf("\n Reg.No \t Name \t Program");
	for(n=1;n<5;++n)
    { 
        printf("Enter the name of the book");
        gets()
fread(&std, sizeof(struct student),1,fptr);
printf("\n%d\t%s",std.regno,std.name,std.program);
fwrite(&std, sizeof(struct student),1,fptr);
}

fclose(fptr);
return 0;
}

//write a c program to store employee name. regno and designation, and basic pay of 10 employees in a FILE 
//display the details in ascending oder of basic pay

