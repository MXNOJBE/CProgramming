#include<stdio.h>

#include<stdlib.h>

int main() {
  int choice, num;
  char name[100];
  int regno;
  char gender[20];
  int age;
  char adhaar[20];
  char license[100];
  int i = 1;
  int math;
  int physics;
  int computers;
  int english;
  int code;

  printf("Enter the student name: ");
  scanf("%s", name);
  printf("Enter the age :\t");
  scanf("%d", & age);
  printf("Enter the regno: ");
  scanf("%d", & regno);
  printf("Enter the gender in-terms of Male OR Female or M/F: ");
  scanf("%s", gender);
  printf("Do you Have a Driving License?if \"YES\", or Type \"NO\" if not available: ");
  scanf("%s", license);
  printf("Having an adhaar card?: Yes/No ");
  scanf("%s", adhaar);
  printf("Enter the MATH marks of the student: ");
  scanf("%d", & math);
  printf("Enter the PHYSICS marks of the student: ");
  scanf("%d", & physics);
  printf("Enter the COMPUTERS marks of the student: ");
  scanf("%d", & computers);
  printf("Enter the ENGLISH marks of the student: ");
  scanf("%d", & english);

  while (i != 0) {
    printf("\nPress 1 to Read the student data\n");
    printf("\nPress 2 to check for driving license\n");
    printf("\nPress 3 to check for adhaar card\n");
    printf("\nPress 4 to know the students gender\n");
    printf("\nPress 5 to display marks \n");
    printf("\nPress 6 to exit from the Centre \n");
    printf("\nEnter your choice:\n");
    scanf("%d", & choice);

    {
      switch (choice) {
      case 1: {
        printf("\t\t\t\t\tWelcome to the Student information Centre\t\t\t\t\t\t\n");
        printf("\n\t\t\t Student's Name is : %s\t\t\t\t\t\n", name);
        printf("\n\t\t\t Student's Regno is : %d\t\t\t\t\t\n", regno);
        printf("\n\t\t\t Student's Gender is : %s\t\t\t\t\t\n", gender);
        printf("\n\t\t\t Student's DL Availability is %s\t\t\t\t\t\n", license);
        printf("\n\t\t\t Student's Adhaar Card Availabilty is :%s\t\t\t\t\t\n", adhaar);
        printf("\n\t\t\t Student's Age is : %d\n", age);
        break;
      }
      case 2: {
        {
          printf("\n\t\t\t Student's DL Availability is :%s\t\t\t\t\t\n", license);
          break;
        }

      }
      case 3: {
        printf("\n\t\t\t Student's Adhaar Card Availabilty is :%s\t\t\t\t\t\n", adhaar);
        break;
      }
      case 4: {
        printf("\n\t\t\t Student's Gender is : %s\t\t\t\t\t\n", gender);
        break;
      }
      case 5: {
        printf("\t\t\tDisplaying the formatted marks:\n\t\t\t\t\t");
        printf("\n\t\t\tMath\t\t\t\t\t%d\n\t\t\t\t\t", math);
        printf("\n\t\t\tPhysics\t\t\t\t\t%d\n\t\t\t\t\t", physics);
        printf("\n\t\t\tComputer-Science\t\t\t%d\n\t\t\t\t\t", computers);
        printf("\n\t\t\tEnglish Litreature\t\t\t%d\n\t\t\t\t\t", english);
        break;
      }
      case 6: {
        printf("exit");
        exit(0);
        break;
      }
      }
    }
  }

}
