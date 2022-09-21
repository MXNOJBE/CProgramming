#include<stdio.h>
int main()
{
	int i=100, sum = 0;
	while(i<999)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
printf("%d",sum);	
}
