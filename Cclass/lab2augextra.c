void highestnumber()
{

    int highest;
    num[0] = highest;
    printf("%d", highest);
    for (i = 1; i < n; i++)
    {
        if (highest < num[i])
        {
            highest = num[i];
            printf("%d", num[i]);
        }
        else
        {
            printf("%d", num[0]);
        }
    }
}

void highestnumber()
{
    int a, highest;
    printf("%d", n);
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
    highest = num[n - 1];
    printf("Highest is %d", highest);
}

void highestNumber()
{
    int highest;
    highest = num[0];
    printf("%d", highest);
    for (i = 1; i < n; i++)
    {
        if (num[i] > highest)
        {
            highest = num[i];
        }
    }
    printf("%d", num[i]);
}









if (num[i] == num[j])
            {
                for (i = 0; i < n; i++)
                {
                    num[i] = c[i];
                }
                int count = count + 1;
                return 1;
            }
            else
            {
                printf("\nReturning 0");
                return 0;
            }