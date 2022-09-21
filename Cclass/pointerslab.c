#include <stdio.h>
#include <stdlib.h>
void main()
{
    int choice;
start:
    printf("\n\n");
    printf("Enter 1 to implement pointer to array concept\n");
    printf("Enter 2 to implement pointer to pointer concept\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int r, i, j;
        int *ptr[3];
        printf("\nEnter the size of the row: ");
        scanf("%d", &r);
        for (i = 0; i < r; i++)
        {
            ptr[i] = (int *)malloc(3 * sizeof(int));
            for (j = 0; j < 3; j++)

            {
                printf("Enter the element: ");
                scanf("%d", &ptr[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\t%d ", ptr[i][j]);
            }
            printf("\n");
        }
        goto start;
        break;
    }
    case 2:
    {
        int r, l, i, j;
        int **ptr1;
        printf("\nEnter the size of the row: ");
        scanf("%d", &r);
        printf("\nEnter the size of the column: ");
        scanf("%d", &l);
        ptr1 = (int **)malloc(r * sizeof(int));
        for (i = 0; i < r; i++)

        {
            ptr1[i] = (int *)malloc(l * sizeof(int));
            for (j = 0; j < l; j++)
            {
                printf("Enter the element: ");
                scanf("%d", &ptr1[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < l; j++)
            {
                printf("%5d ", ptr1[i][j]);
            }
            printf("\n");
        }
        goto start;
        break;
    }
    default:
    {
        printf("\nInvalid entry");
        break;
    }
    }
}