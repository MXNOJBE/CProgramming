#include<stdio.h>
int main()
{
	int m;
	printf("Enter the mark");
	scanf("%d",&m);
	if(m>=90)
	{
		printf("Its a A Grade");
	}
	else if(m>=70 && m<=90)
	{
		printf("Its a B Grade");	
	}
	else if (m>=50 && m<=70)
	{
		printf("Its a C Grade");
	}
	else
	{
		printf("fail");
	}
}
