#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int classa,classb,classc,sum1=0,sum2=0,sum3=0,con=0,sum4=0,classd;
	do{
	
	int applnum,apptitudemarks,interviewmarks,total,count=0,var,ainc;
	float sslmarks,pumarks,ugmarks;
	char Name,check,grade;
	printf("\n\n\tSelection of Applicant for the Post Graduation Programme By Admission Office\n\n");
	printf("\t\t1. For Entering the Applicant Details\n");
	printf("\t\t2. To Know the Total Grading Of Applicant\n");
	printf("\t\t3. To Know for which Section the Applicant is Selected\n");
	printf("\t\t4. Press any key to Exit\n");
	printf("\nEnter the choice \t: ");
	scanf("%d",&var);
	{
		switch(var)
		{
			case 1:
				printf("\nEnter Application Number\t: ");
				scanf("%d",&applnum);
				printf("\nEnter Name\t\t\t: ");
				scanf("%s",&Name);
				printf("\nEnter sslcmarks\t\t\t: ");
				scanf("%f",&sslmarks);
				printf("\nEnter PU marks\t\t\t: ");
				scanf("%f",&pumarks);
				printf("\nEnter the UG marks\t\t: ");
				scanf("%f",&ugmarks);
				printf("\nEnter the apptitude  marks\t: ");
				scanf("%d",&apptitudemarks);
				printf("\nEnter the interview  marks\t: ");
				scanf("%d",&interviewmarks);
				total=(sslmarks*0.10+pumarks*0.20+ugmarks*0.30+apptitudemarks*0.30+interviewmarks*0.10);
				if(total>=90 && total<=100){
					sum1=sum1+1;
				}
				else if(total>=80 && total<90){
					sum2=sum2+1;	
				}
				else if(total>=70 && total<80){
					sum3=sum3+1;	
				}
				else
					sum4=sum4+1;
				break;
				
			case 2:
				printf("\nThe total is %d",total);
				break;
			case 3:
				if(total>=90 && total<=100){
					printf("\n\tStudent Selected for A Section");
				}
				else if(total>=80 && total<90){
					printf("\n\tStudent Selected for B Section");	
				}
				else if(total>=70 && total<80){
					printf("\n\tStudent Selected for C Section");	
				}
				else
				{
					printf("\n\tStudent  Not Selected for any section ");
				}
				break;
			default:
				goto r;
				
		}
		classa=sum1;
		classb=sum2;
		classc=sum3;
		classd=sum4;	
	}
	printf("\n");
	printf("\nDo You Want To Continue Y/N:");
	scanf("%s",&con);

}while(con=='Y');
    r:
    printf("\n Number of students Selected for classA is        %d",classa);
	printf("\n Number of students Selected for classB is        %d",classb);
	printf("\n Number of students Selected for classC is        %d",classc);
	printf("\n Number of students Not Selected for Any class is %d",classd);
	return 0;
}
