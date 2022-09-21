#include<stdio.h>
int main()
{
int temp2,rem,sum,n;
printf("Enter num: ");
scanf("%d",&temp2);
///printf("%d",temp2);
while(temp2>0)    
			{    
				printf("%d",temp2);
				rem=temp2%10;    
				sum=(sum*10)+rem;    
				temp2=temp2/10;  
						
			} 
				if(temp2==sum)
				printf("\nThe number is palindrome\n");
				else
				printf("\nThe number is not planidrome\n");
					
				}
