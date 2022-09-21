#include <stdio.h>
#include <stdlib.h>
int main()
{

	int choice, i, j, n, row, column;
menu:
	printf("\nProblem based on  array-pointer");
	printf("\n1.a[10][ptr]-array of pointer;");
	printf("\n2.a[ptr][ptr]-pointer to pointer");
	printf("\n3.Exit");
	scanf("%d", &choice);
	if (choice == 1)
	{
		int *ptr[3];
		printf("\nEnter the number of course : ");
		scanf("%d", &n);
		for (i = 0; i < 3; i++)
			ptr[i] = (int *)malloc(n * sizeof(int));
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 3; j++)
			{
				scanf("%d", &ptr[i][j]);
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("t%d", ptr[i][j]);
			}
			printf("\n");
		}
		goto menu;
	}
	else if (choice == 2)
	{
		int **array;
		printf("\nEnter the number of row :");
		scanf("%d", &row);
		printf("\nEnter the number of column :");
		scanf("%d", &column);
		array = (int **)malloc(row * sizeof(int));
		for (i = 0; i < row; i++)
			array[i] = (int *)malloc(column * sizeof(int));
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				scanf("%d", &array[i][j]);
			}
		}
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				printf("\t%d", array[i][j]);
			}
			printf("\n");
		}
		goto menu;
	}
	else if (choice != 3)
	{
		printf("\nInvaild Input");
	}
}
