#include <stdio.h>
#include <math.h>

int factorial(int a) {
    int result = 1;
    for(int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}

float sine(float a) {
    return sin(a);
}

float cosine(float a) {
    return cos(a);
}

float tangent(float a) {
    return tan(a);
}





void print_math_atan() {
    double x;

    printf("Enter a number: ");
    scanf("%lf", &x);

    double result = atan(x);
    printf("The arctangent of %lf is %lf radians.\n", x, result);
}
void print_math_atan2() {
    double y, x;

    printf("Enter the y-coordinate: ");
    scanf("%lf", &y);

    printf("Enter the x-coordinate: ");
    scanf("%lf", &x);

    double result = atan2(y, x);
    printf("The arctangent of %lf / %lf is %lf radians.\n", y, x, result);
}
int main() {
    int choice;
do{
  printf("Welcome to the C Scientific Calculator!\n");
printf("\nAvailable Operations:\n");
printf("1. Sine (^)\n");
printf("2. Cosine\n");
printf("3. Tangent (tan)\n");
printf("4. ArcSine (sin)\n");
printf("5. ArcCosine (cos)\n");
printf("6. ArcTangent (tan)\n");

int num1, num2 , base;
    float float1, float2;
    char choice;
printf("\nEnter your choice: ");
  scanf("%d", &choice);

switch (choice){
case 1:
    printf("Enter a floating point number: ");
    scanf("%f", &float1);
    printf("Sine: %.2f\n", sine(float1));
    break;

case 2:    
    printf("Enter a floating point number: ");
    scanf("%f", &float1);
    printf("Cosine: %.2f\n", cosine(float1));
    break;

case 3:    
    printf("Enter a floating point number: ");
    scanf("%f", &float1);
    printf("Tangent: %.2f\n", tangent(float1));
    break;

case 4:    
   double num, arcsin;

    printf("Enter a number between -1 and 1: ");
    scanf("%lf", &num);

    // Check if the number is within the valid range
    if (num >= -1 && num <= 1) {
        arcsin = asin(num);
        printf("The arcsine of %.2lf is %.2lf radians.\n", num, arcsin);
    } else {
        printf("The number is not within the valid range.\n");
    }

    break; 

case 5:   
    {
        double num, arccos;

    printf("Enter a number between -1 and 1: ");
    scanf("%lf", &num);

    // Check if the number is within the valid range
    if (num >= -1 && num <= 1) {
        arccos = acos(num);
        printf("The arccosine of %.2lf is %.2lf radians\n", num, arccos);
    } else {
        printf("The number is not within the valid range.\n");
    }
    }
    break;

case 6:    
    print_math_atan();
    print_math_atan2();
    break;
    }
}while(choice != 0);
 

    return 0;
}
