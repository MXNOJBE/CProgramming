#include <stdio.h>
#include <stdlib.h>

void bitwise()
{
    int choice, num1, num2, n;
    printf("\nEnter 1 to do an Bitwise And& Operation");
    printf("\nEnter 2 to do an Bitwise OR| Operation");
    printf("\nEnter 3 to do an Bitwise XOR Operation");
    printf("\nEnter 4 to do an Bitwise complement Operation");
    // printf("\nEnter 5 to do an Bitwise left shift Operation");
    // printf("\nEnter 6 to do an Bitwise right shift Operation");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch (choice)
    {
    case 1:
        printf("The Bitwise and is : %d", num1 & num2);
        break;
    case 2:
        printf("The bitwise OR is : %d", num1 | num2);
        break;
    case 3:
        printf("The bitwise XOR is : %d", num1 ^ num2);
        break;
    case 4:
        printf("The bitwise complement is: %d %d", ~num1, ~num2);
        break;
        /*case 5:
            printf("Enter how many bits your want to shift: ");
            scanf("%d", &n);
            printf("The left shift : %d %d", num1 << 1, num2 << 1);
            break;

        case 6:
            printf("Enter how many bits your want to shift: ");
            scanf("%d", &n);
            printf("The right shift : %d %d", num1 >> 1, num2 >> 1);
            break;*/
    }
}
void union1()
{
    union get1
    {
        /* data */
        int x;
        int y;
    } Get1;
    union get2
    {
        int x;
        char y;
    } Get2;
    union get3
    {
        int arr[40];
        char y;
    } Get3;
    printf("sizeof(get1) = %lu, sizeof(get2) = %lu, "
           "sizeof(get3) = %lu",
           sizeof(Get1),    
           sizeof(Get2), sizeof(Get3));
}
int main()
{
    int choice;
loop:
    printf("\n1.Enter 1 to perform bitwise operations: ");
    printf("\n2.Enter 2 to know the size required for each datatype: ");
    printf("\n3.Exit");
    printf("\nEnter Your choice : ");
    scanf("%d", &choice);
    if (choice == 1)
        bitwise();
    else
        union1();
    goto loop;
}
