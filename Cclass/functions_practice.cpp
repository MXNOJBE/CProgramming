#include <stdio.h>

int calculate(int a, int b)
{
  int multi = a * b;
  return multi;
}
int main()
{
  int a, b;
  printf("Enter the numbers: ");
  scanf("%d %d", &a, &b);
  int result = calculate(a, b);
  printf("Multi is %d ", result);
}