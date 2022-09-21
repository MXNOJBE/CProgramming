#include <stdio.h>

unsigned long long int factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}
int main()
{
    int num;
    printf("\n Enter thee Number: ");
    scanf("%d", &num);
    printf("Facttorial of %d \n", num, factorial(num));
    return 0;
}

int fibo(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;

    return fibo(i - 1) + fibo(i - 2);
}
int main()
{
    int i;
    
    for (i = 0; i < 10; i++)
    {
        printf("%d\t\n", fibo(i));
    }
}