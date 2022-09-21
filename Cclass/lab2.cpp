#include<stdio.h>
int main()
{
	int n,choice,rem,sum=0,i=1,temp,fact =1,fact_sum=0,n1,copy;
	printf("Enter the number: ");
	scanf("%d", &n);
    printf("\nEnter 1 to find the sum of digits in the given number\n");
    printf("\nEnter 2 to find out if its a plaindrome or not\n");
    printf("\nEnter 3 to find the factorial of the even digits of a number\n");
    printf("\nEnter your choice:\n");
    scanf("%d", &choice);
    
    {
    	switch(choice){
    	case 1:
    		while(n>0)    
					{    
						rem=n%10;    
						sum=sum+rem;    
						n=n/10;    
					}    
						printf("\nThe sum of the individual digit is %d\n",sum); 
			break;
		
		case 2:
			temp=n;
			while(n>0)    
					{    
						rem=n%10;    
						sum=(sum*10)+rem;    	
						n=n/10;  
						
					} 
						if(temp==sum)
						printf("\nThe number is palindrome\n");
						else
						printf("\nThe number is not planidrome\n");
						
			break;
		
		case 3:

			while(n>0)
			{
				fact = 1;
				rem = n%10;
				if(rem % 2== 0)
				{
					for (i=1;i<=rem;i++)
					{
					  fact = fact*i;
					
					}
					
					fact_sum = fact_sum+fact;
			
					
				}
				n = n/10;
				
			}
			printf("The sum of factorials are :%d",fact_sum);
			break;
		
		}
	}	
    		
	}


	
