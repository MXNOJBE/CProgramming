#include<stdio.h>
void addmatrix(int a[][3],int b[][3]) //function takes two parameters
void addmatrix(int x,int y, int a[x][y],int b[x][y]);
int main()
{
	int x,y,x1,y1;
	printf("\n Enter the number of rows for matrix 1: ");
	scanf("%d",&x);
	printf("\n Enter the number of coloums for matrix 2: ");
	scanf("%d",&y);
	printf("\n Enter the number of rows for matrix 1: ");
	scanf("%d",&x1);
	printf("\n Enter the number of coloums for matrix 2: ");
	scanf("%d",&y1);
	if((x==x1)&&(y==y1))
	{
		printf("\n Operation can take place");
		
		
	}
	else
	{
		printf("\n Operation not possible");
	}
	
}
