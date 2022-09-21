#include<stdio.h>

int main()
{
	int amt,fin_price;
	printf("Enter the worth of shopping : ");
	scanf("%d",&amt);
	if(amt<=2000)
	{
		fin_price = (amt*0.95);
		
	}
	else if(amt>=2001 && amt<=5000)
	{
		fin_price = (amt*0.75);
		}
		
	else if(amt>=5001 && amt<=10000)
	{
		fin_price = (amt*0.65);
			
	}
	else if (amt>10000)
	{
		fin_price = (amt*0.5);
			
	}
	printf("the discount is %d",fin_price);

}
