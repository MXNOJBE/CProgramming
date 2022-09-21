#include<stdio.h>
int main() {
  int i=1;
  int choice, num;
  char name[100];
  float puperc;
  float tenthperc;
  float entrance;
  float interview;
  char course[100];
  char pucollege[100];
  char tenthschool[100];
  float results;
  float age;
  float average = 0;
  char state[100];
  char nation[100];
  float interview1;
  float entrance1;
  
  printf("Enter the 10th school name: ");
  scanf("%s",tenthschool);
  printf("Enter the tenth percentage: ");
  scanf("%f",&tenthperc);
  printf("Enter the PU College: ");
  scanf("%s",&pucollege);
  printf("Enter the PU percentage: ");
  scanf("%f",&puperc);
  printf("Rate your confidence of the entrance exam");
  printf("/nOn a Scale of 1 - 5, Where 1 is not good and 5 as outstanding: ");
  scanf("%f",&entrance);
  printf("Rate your confidence of the Interview: ");
  scanf("%f",&interview);
  printf("Enter your desired Course: ");
  scanf("%s",course);
  printf("Enter the nation: ");
  scanf("%s",nation);
  printf("Enter the state: ");
  scanf("%s",state);  
  
  while (i != 0) {
    printf("\nPress 1 to Look at your data\n");
    printf("\nPress 2 to Look at the Prediction result \n");
    printf("\nPress 3 to exit from the Centre \n");
    printf("\nEnter your choice:\n");
    scanf("%d", & choice);
    
	
	{
      switch (choice) {
      case 1: {
      	
		printf("\t\t\tDisplaying the formatted information:\n\t\t\t\t\t");
		printf("\n\t\t\tName:\t\t\t%s",name);	
		printf("\n\t\t\tCollege name:",pucollege);
		printf("\n\t\t\tSchool name:",tenthschool);
        printf("\n\t\t\tTenth Percentage:\t\t\t\t\t%f\n\t\t\t\t\t", tenthperc);
        printf("\n\t\t\tPU Percentage:\t\t\t\t\t%f\n\t\t\t\t\t", puperc);
        printf("\n\t\t\tPU Desired Course:\t\t\t\t\t%s\n\t\t\t\t\t", course);
        printf("\n\t\t\tResiding Nation:\t\t\t\t\t%s\n\t\t\t\t\t", nation);
        printf("\n\t\t\tResiding State:\t\t\t\t\t%s\n\t\t\t\t\t", state);
        break;
      }
      case 2: 
	  {
	   entrance1 = entrance*20;
	   interview1 = interview*20;
	   printf("entrance1 is %2f",entrance1);
	   printf("interview is %2f", interview1);
	   average = ((tenthperc+puperc+entrance1+interview1/400)*100); 
	   printf("The results are %2f",average);
	   if(average>=80 )
	{
		printf("\nYou might get bca");
	}
	if(average>70 && average<80)
	{
		printf("\nYou might have to opt to CMA");
	}
	if(average>60 && average<70)
	{
		printf("\nYou might get CMA");
	}
	if(average<60)
	{
		printf("\nSorry, you are not eligible for any course for this year");
	}
    break;
      }
  }
}
}
}
