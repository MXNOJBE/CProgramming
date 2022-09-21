#include<stdio.h>
#include<stdlib.h>
int main()
{
	while(1){
	
	int applnum,apptitudemarks,interviewmarks,total,count=0,var;
	float sslmarks,pumarks,ugmarks;
	char Name,check;
	
	printf("Enter choice ;");
	scanf("%d",&var);
	
	
	{
		switch(var)
		{
			case 1:
				printf("Enter Application Number:");
				scanf("%d",&applnum);
				printf("Enter Name");
				scanf("%s",&Name);
				printf("Enter sslcmarks: ");
				scanf("%f",&sslmarks);
				printf("Enter PU marks");
				scanf("%f",&pumarks);
				printf("Enter the UG marks");
				scanf("%f",&ugmarks);
				printf("Enter the apptitude  marks");
				scanf("%d",&apptitudemarks);
				printf("Enter the interview  marks");
				scanf("%d",&interviewmarks);
				break;
				
			case 2:
				total=(sslmarks*0.10+pumarks*0.20+ugmarks*0.30+apptitudemarks*0.30+interviewmarks*0.10);
				printf("The total is %d",total);
				break;
				
				
				
		}
			
	}
}
	return 0;
}
