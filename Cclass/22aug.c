/*#include <stdio.h>

void fun(int a)
{
    printf("Value of a is %d\n", a);
}
int main()
{
    void (*fun_ptr)(int) = fun; // &removed
    fun_ptr(10);                // removed
    return 0;
}
*/

#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}
void multiply(int a, int b)
{
    printf("Value of multiplication is %d\n", a * b);
}

int main()
{
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;
    printf("Enter choice:0 for add, 1 for subtract and 2 for multiply\n");
    scanf("%d", &ch);
    if (ch > 2)
        return 0;
    (*fun_ptr_arr[ch])(a, b);
    return 0;
}