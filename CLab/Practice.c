
#include <stdio.h>
int sum(int a[100]);
int sumArray(int a[100], char select);
int n;
char select;
void main()
{
    int choice, i, a[100], sum1;
    char element, timer;
    printf("\nEnter the Number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value of a[%d]:", i);
        scanf("%d", &a[i]);
    }
menu:
    printf("\n\nMenu driven program to perform follwoing operation");
    printf("\n1.To perform sum of all elements in an array");
    printf("\n2.To perform sum of all  even or odd elements in an array");
    printf("\n3.Exit");
    printf("\n\nEnter the choice:\t");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:

        sum1 = sum(a);
        printf("\n%d is the sum of all elements in an array", sum1);
        break;
    case 2:
        printf("\nEnter the ''O' for sum of Odd number and 'E' for Even number:");
        scanf("%s", &select);
        sum1 = sumArray(a, select);
        printf("\n%d is the sum of all elements in an array", sum1);
        break;
    case 3:
        goto end;
    default:
        printf("\n Invalid Choice");
    }
    goto menu;
end:
    printf("\n\n\n\t~~~~~~~~~~END~~~~~~~~~~~");
}
int sum(int a[10])
{
    int sum = 0, i = 0;
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
        sum = sum + a[i];
    }
    return sum;
}
int sumArray(int a[10], char select)
{
    int sum = 0, i = 0;
    if (select == 'E')
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                printf("\n%d", a[i]);
                sum = sum + a[i];
            }
        }
    }
    else if (select == 'O')
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                // printf("\n%d",a[i]);
                sum = sum + a[i];
            }
        }
    }
    else
        ("\n Invalid Selection of operarion ");
    return sum;
}
