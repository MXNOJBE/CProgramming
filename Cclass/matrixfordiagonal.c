#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum[3][3], rows, cols, i, j;

    printf("Enter the Rows and Coloums: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the numbers of first array:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    printf("%d", a[rows][cols]);
    printf("Enter the numbers of second array");
    for (i = 0; i < rows; i++)
    {
        scanf("%d", &b[i]);
    }
    for (j = 0; j < cols; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("Sum of arrays is:\n");
    for (i = 0; i < rows; i++)
    
        for (j = 0; j < cols; j++)
        {  sum[rows][cols] = a[rows][cols] + b[rows][cols];
            printf("%d", sum[rows][cols]);
        
    }
}