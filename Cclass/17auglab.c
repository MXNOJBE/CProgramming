#include <stdio.h>
int i, n, sum1 = 0, choice, s;
char ch;

void sum(int a[])
{
	for (i = 0; i < n; i++)
	{
		printf("Enter the element number %d: \n", i);
		scanf("%d", &a[n]);
		sum1 = sum1 + a[n];
	}
	printf("The total sum of all elements is :%d", sum1);
}
void oddoreven(int a[])
{
	printf("Enter Wheter You want Odd or Even Press O OR E:");
	scanf("%c", &ch);
	
	for (i = 0; i < n; i++)
	{
		printf("Enter the element number %d: \n", i);
		scanf("%d", &a[n]);
	}
}

int main()
{
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter 1 to get the sum of all elements in the array\n");
	printf("Enter 2 to get the sum of odd or even elements in the array\n");
	printf("Enter the choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		sum(a);
		break;
	case 2:

		oddoreven(a);
		break;
	}
}
