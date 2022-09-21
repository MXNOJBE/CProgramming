#include<stdio.h>
int main()
{
int i, sum = 0;
printf("the first 10 natural numbers are :");
for(i=0;i<10;i++)
{
	sum = sum + i;
	printf("%d",i);
	
}
printf("The sum is %d",sum);
}
