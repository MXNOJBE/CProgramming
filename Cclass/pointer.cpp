#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", *a[i]);
        printf("\n Starting adress of array %d", a + i);
    }
}
/// printf("The value of a is %d", a);
/// c = &a; //&-->address of variable
/// printf("\nAdrees of c is %d", c);
/// printf("\nAdress of a is %p", &a);
////printf("\nThe value in a and c is %d", c);
//}
// r value of the pointer will always be the L value of other variable.