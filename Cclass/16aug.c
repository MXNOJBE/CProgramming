#include <stdio.h>
int main()
{
    int i, j;
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int e[5] = {1, 2, 3, 4, 5};
    // for 1d array
    for (i = 0; i < 3; i++)
    {
        // printf("\n Enter the Number: "); //for an array variable its name is the adress of the variable poinitjng to the first element of that array, Where as normal variable returns the value
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d", *(*(a + i) + j));
                printf("%d", (a + i));
                /*
                printf("\n%d", **((a + i) + j));
                printf("\n%d", (*(a[i] + j));
                printf("\n%d", (*(a + i)[j]);
                printf("\n%d", a[i][j]);
            }*/
            }
        }
    }
}