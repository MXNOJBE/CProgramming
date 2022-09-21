//p1
#include<stdio.h>

void main()
{
int a=3,b=6;
printf("Value before swapping a = %d b = %d",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("\nValue After swapping a = %d b = %d",a,b);
}

#include <stdio.h>
 
int count(unsigned int x)
{
    int n = 0;
    while (x > 0)
    {
        x = x&(x-1);
        n = n + 1;
    }
    printf("The number of bits in this line is");
}
 int main()
 {
	unsigned int x,a;
	a = count(x);
	printf("\nThe number of bits in above line is: %u",a);
 }

#include<stdio.h>
#include<unistd.h>
 
int main(){
 
    int hours = 0 , minutes = 59 , seconds = 56 , milliseconds = 0; 
    while(1){
        printf("\r\t%.2d HOURS : %.2d MINUTES : %.2d SECONDS : %d",hours, minutes,seconds, milliseconds);
        fflush(stdout);
        usleep(1000);
        ++milliseconds;
        if(milliseconds == 1000){ /*edit: previously was if(milliseconds == 999) */
            milliseconds = 0;
            ++seconds;
        }
        if(seconds == 60){
            milliseconds = 0;
            seconds = 0;
            ++minutes;
        }
        if(minutes == 60){
            milliseconds = 0;
            seconds = 0;
            minutes = 0;
            ++hours;
        }
    }
    return 0;
}

#include <stdio.h>

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int main()
{
    char op = 'c';
    int x, y;
    while (op != 'e')
    {
        printf("\nEnter an operation: ");
        printf("\nadd(+),subtract(-),divide(/), multiply(*), e to exit ?");
        scanf("%c", &op);
        switch (op)
        {
        case '+':
            printf("Enter two numbers: ");
            scanf("%d", &x);
            scanf("%d", &y);
            printf("The sum of %d + %d = %d\n", x, y, add(x, y));
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%d", &x);
            scanf("%d", &y);
            printf("The sum of %d + %d = %d\n", x, y, subtract(x, y));
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%d", &x);
            scanf("%d", &y);
            printf("The sum of %d + %d = %d\n", x, y, divide(x, y));
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%d", &x);
            scanf("%d", &y);
            printf("The sum of %d + %d = %d\n", x, y, multiply(x, y));
            break;
        case 'e':
            printf("Exiting...");
            return 0;
        default:
            printf("Invalid operation");
            break;
        }
    }
    return 0;
}

#include <stdio.h> //alternate solution

#define LOWER_LIMIT 0
#define HIGHER_LIMIT 50000

int main(void) {
    double fahr, cel;
    int limit_low = -1;
    int limit_high = -1;
    int step = -1;
    int max_step_size = 0;
    
    /* Read in lower, higher limit and step */
    while(limit_low < (int) LOWER_LIMIT) {
        printf("Please give in a lower limit, limit >= %d: ", (int) LOWER_LIMIT);
        scanf("%d", &limit_low);
    }
    while((limit_high <= limit_low) || (limit_high > (int) HIGHER_LIMIT)) {
        printf("Please give in a higher limit, %d < limit <= %d: ", limit_low, (int) HIGHER_LIMIT);
        scanf("%d", &limit_high);
    }
    max_step_size = limit_high - limit_low;
    while((step <= 0) || (step > max_step_size)) {
        printf("Please give in a step, 0 < step >= %d: ", max_step_size);
        scanf("%d", &step);
    }
    
    /* Initialise Celsius-Variable */
    cel = limit_low;
    
    /* Print the Table */
    printf("\nCelsius\t\tFahrenheit");
    printf("\n-------\t\t----------\n");
    while(cel <= limit_high) {
        fahr = (9.0 * cel) / 5.0 + 32.0;
        printf("%f\t%f\n", cel, fahr);
        cel += step;
    }
    printf("\n");
    
    return 0;
}


temp = input("Input the  temperature you like to convert? (e.g., 45F, 102C etc.) : ")
degree = int(temp[:-1])
i_convention = temp[-1]

if i_convention.upper() == "C":
  result = int(round((9 * degree) / 5 + 32))
  o_convention = "Fahrenheit"
elif i_convention.upper() == "F":
  result = int(round((degree - 32) * 5 / 9))
  o_convention = "Celsius"
else:
  print("Input proper convention.")
  quit()
print("The temperature in", o_convention, "is", result, "degrees.")
