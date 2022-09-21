#include<stdio.h>

int main()
{
	int i=1, num , sum=0;
	
	while(i<=10)
	{
		printf("\nEnter the number %d: ",i);
		scanf("%d",&num);
		printf("\nthe number is: %d ", num);
		sum = sum+num;
		printf("\nThe sum is: %d",sum);
		i++;
	}
}
