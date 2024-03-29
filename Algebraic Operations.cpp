#include <stdio.h>
#include <math.h>
double customLog(double a, double b) {
    if (a <= 0 || b <= 0) {
        printf("Error: Invalid input\n");
        return -1;
    }
    return log(a) / log(b);
}

int main() {
    int choice;
do{
  printf("Welcome to the C Scientific Calculator!\n");
printf("\nAvailable Operations:\n");
printf("1. Logarithm (base 10)\n");
printf("2. Natural Logarithm (base e)\n");
printf("3. Custom Base Logarithm\n");

int num1, num2 , base;
    float float1, float2;
    char choice;
printf("\nEnter your choice: ");
  scanf("%d", &choice);

switch (choice){
case 1:
{     
double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if(num <= 0) {
        printf("Invalid input. The number should be greater than 0.\n");
    } else {
        result = log10(num);
        printf("The Logarithm (base 10) of %.2lf is %.4lf.\n", num, result);
    }
    }
    break;
    
case 2:
       {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    result = log(num); // calculates the natural logarithm of num

    printf("The natural logarithm of %.2lf is %.2lf\n", num, result);

    return 0;
}
break;
         
  case 3:
{
    double a, b;
    printf("Enter the number: ");
    scanf("%lf", &a);
    printf("Enter the base: ");
    scanf("%lf", &b);
    double result = customLog(a, b);
    if (result != -1) {
        printf("logb a = %.4f\n", result);
    }
    }
    break;
}
}while(choice != 0);
 

    return 0;
}
