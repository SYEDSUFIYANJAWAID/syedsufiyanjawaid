#include <stdio.h>
#include <math.h>
int main() {
    int choice;
do{
  printf("Welcome to the C Scientific Calculator!\n");
printf("\nAvailable Operations:\n");
printf("1.Modulus (remainder) \n");
printf("2.Percentage calculation\n");
printf("3.Greatest Common Divisor (GCD)\n");
printf("4.Least Common Multiple (LCM)\n");

int num1, num2 , base;
    float float1, float2;
    char choice;
printf("\nEnter your choice: ");
  scanf("%d", &choice);

switch (choice){
case 1:
{
    int dividend, divisor, remainder;

    // Get the dividend and divisor from the user
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate the remainder using the modulo operator
    remainder = dividend % divisor;

    // Display the result
    printf("The remainder is: %d\n", remainder);

    
}
break;

case 2:
{
    float base, percentage, result;

    // Get the base value and the percentage from the user
    printf("Enter the base value: ");
    scanf("%f", &base);

    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    // Calculate the result as a percentage of the base value
    result = (base * percentage) / 100;

    // Display the result
    printf("The result after applying %.2f%% on %.2f is: %.2f\n", percentage, base, result);

    return 0;
}

break;

case 3:
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
break;

case 4:
{

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
  }
}while(choice != 0);
 

    return 0;
}
