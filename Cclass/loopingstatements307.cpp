#include <stdio.h>
int main()

{
unsigned int a,b,c,i=0;
char a1[]="Mark";
//for(;i<5;)
while(i<5)
{
	printf("\n Enter the mark1 of student %d: ", i+1);
	scanf("%u",&a);
	printf("\n Enter the mark2: ");
	scanf("%u",&b);
	c= a+b;
	printf("\n%s",a1);
	printf("\n%-20u",a);
	printf("\n%-20u",b);
	printf("\nTotal =\t%u",c);
	//i++;
	
}
}

