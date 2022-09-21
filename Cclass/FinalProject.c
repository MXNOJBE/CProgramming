#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int classa,classb,classc,sum1=0,sum2=0,sum3=0;
	while(1){
	
	int applnum,apptitudemarks,interviewmarks,total,count=0,var,ainc;
	float sslmarks,pumarks,ugmarks;
	char Name,check,grade;
	char arr[50]={ },arr1[50]={ };
	//printf("%s",&arr[]);
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
			case 3:
				if(total>=90 && total<=100){
					printf("Student Selected for A Section");
					sum1=sum1+1;
					
					//char arr[50] ="A";
					
				
				}
				else if(total>=80 && total<90){
					printf("Student Selected for B Section");
					sum2=sum2+1;
					//char arr[ ] = "B";
					
				}
				else if(total>=70 && total<80){
					printf("Student Selected for C Section");
					sum3=sum3+1;
					//char arr[ ] = "C";
					
				}
				else
					printf("Student  Not Selected for any section ");
				break;
			default:
				goto r;
				
		}
		classa=sum1;
		classb=sum2;
		classc=sum3;
		
		
	
		//printf("%s",arr[]);
			
	}
	

}    
    r:
    printf("\n Number of students in classA is %d",classa);
	printf("\n Number of students in classB is %d",classb);
	printf("\n Number of students in classC is %d",classc);
	return 0;
}
