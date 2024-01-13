#include <stdio.h>
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if(b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float)a / b;
}
int main() {
    int choice;
do{
  printf("Welcome to the C Scientific Calculator!\n");
printf("\nAvailable Operations:\n");
printf("1. Addition (+)\n");
printf("2. Subtraction (-)\n");
printf("3. Multiplication (*)\n");
printf("4. Division (/)\n");

int num1, num2 , base;
    float float1, float2;
    char choice;
printf("\nEnter your choice: ");
  scanf("%d", &choice);

switch (choice){

  case 1:
  
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Addition: %d\n", add(num1, num2));
   break;
    
  case 2:
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Subtraction: %d\n", subtract(num1, num2));
    break;
  
  case 3:
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Multiplication: %d\n", multiply(num1, num2));
    break;

case 4:
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Division: %.2f\n", divide(num1, num2));
    break;

     }
}while(choice != 0);
 

    return 0;
}
