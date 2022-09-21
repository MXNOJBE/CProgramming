#include <stdio.h>
int main()
{
    int i, j, *a[3][3], *b[3][3], *c[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the array index [%d][%d]:", i, j);
            scanf("%d %d", a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the array index %d", i);
            scanf("%d", b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        c[i][j] = *a[i][j] + b[i][j];
        for (i = 0; i < 3; i++)
        {
            printf("%d", *c[i][j]);
        }
    }
}