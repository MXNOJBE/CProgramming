#include <stdio.h>
int n, fact = 1, i, a;

int findout(int n)
{
    if (n % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int factorial(float n)
{
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    // return fact;
    printf("%d", fact);
}
int main()
{
    printf("Enter the number which factorial schould be found : ");
    scanf("%d", &n);
    int (*fact_ptr)(float) = &factorial;
    (*fact_ptr)(n);
    int (*ptr2)() = &findout;
    (*findout)(n);

    // a = factorial(n);
    // printf("%d", a);
}
