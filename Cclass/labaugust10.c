#include <stdio.h>
int num[50], c[50], count = 0, n, i, j, number, e, b, d;

void readArray()
{
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
}

void displayArray()
{
    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("%d", num[i]);
    }
}
void highestNumber()
{
    int a;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    for (i = 0; i < n; ++i)
        printf("%d\n", num[i]);

    printf("Highest is %d", num[0]);
}
void smallestNumber()
{
    int a;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    for (i = 0; i < n; ++i)
        printf("%d\n", num[i]);
    printf("Smallest is %d", num[0]);
}
int showrepeatednumbers()
{
    printf("The Duplicate number is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                printf("%d\n", num[i]);
            }
        }
    }
}
int repeatednumbers()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (num[i] == num[j])
            {
                if (i != j)
                {
                    return 1;
                    break;
                }
            }
        }
    }
    return 0;
}

int repeatedelementcount()
{
    int i, count = 0, re, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (num[i] == num[j])
            {
                if (i != j)
                {
                    re = num[i];
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (re == num[i])
            count = count + 1;
    }
    if (count == 0)
        printf("The elements have not repeated\n");

    return count;
}
int main()
{
    int choice, i, cont;
    while (cont)
    {
        printf("\nEnter 1 to read Array");
        printf("\nEnter 2 to Display the array");
        printf("\nEnter 3 to get the highest number");
        printf("\nEnter 4 to get the smallest number");
        printf("\nEnter 5 to get to know whether there is a repeated number");
        printf("\nEnter 6 to get the repeated element count");
        printf("\nEnter 7 to see the repeated elements");
        printf("\nEnter Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            readArray();
            break;
        case 2:
            displayArray();
            break;
        case 3:
            highestNumber();
            break;
        case 4:
            smallestNumber();
            break;
        case 5:
            repeatednumbers();
            d = repeatednumbers();
            printf("%d", d);
            break;
            break;
        case 6:
            e = repeatedelementcount(b);
            printf("\nThe number of repeated elements are %d\n", e);
            break;

        case 7:
            showrepeatednumbers();
            printf("\nDo you wish to continue (Enter 1 or 0) : ");
            scanf("%u", &cont);
        }
    }
}