#include <stdio.h>
void main()
{
    int a, b;
    int *c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("The value of a is %d", a);
    c = &a; //&-->address of variable
    printf("\nAdrees of c is %d", &c);
    printf("\nAdress of a is %d", &a);
}