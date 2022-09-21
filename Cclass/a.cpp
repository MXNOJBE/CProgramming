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
    printf("Facttorial of %d is %d\n", num, factorial(num));
    return 0;
}

