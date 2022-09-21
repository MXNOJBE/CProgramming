#include <stdio.h>
#include <stdlib.h>
void main()
{
    int batch, part, i, j;
    int **p;
    int *batarr;
    printf("\n Enter the number of batches: ")
        scanf("%d", &batch)
            p = (int **)malloc(batch * sizeof(int *));
    batarr = (int *)malloc(batch * sizeof(int));
    for (i = 0; i < batch; i++)
    {
        printf("\n Enter the maeks of batch:%d participant:%d,i+1,j+1");
        scanf("%d", &p[i][j])
    }
}
for (i = 0; i < n; i++)
{
    for (j = 0; j < batarr[i]; j++)
    {
        printf("\n the mark of batch :%d participants is %d is %d", i + 1, j + 1, p[i][j]);
    }
}
