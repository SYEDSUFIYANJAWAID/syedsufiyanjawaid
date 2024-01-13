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

float power(float a, float b) {
    return pow(a, b);
}

float square_root(float a) {
    return sqrt(a);
}

float cube_root(float a) {
    return cbrt(a);
}

float nth_root(float a, float b) {
    return pow(a, 1/b);
}

int absolute_value(int a) {
   return abs(a);
}

double customLog(double a, double b) {
    if (a <= 0 || b <= 0) {
        printf("Error: Invalid input\n");
        return -1;
    }
    return log(a) / log(b);
}

void swap(double *xp, double *yp) {
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition(double arr[], int low, int high) {
    double pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

double quickSort(double arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
    return arr[low];
}

double median(double numbers[], int n) {
    double sorted_numbers[n];

    for (int i = 0; i < n; i++) {
        sorted_numbers[i] = numbers[i];
    }

    quickSort(sorted_numbers, 0, n - 1);

    if (n % 2 != 0) {
        return sorted_numbers[n / 2];
    }

    return (sorted_numbers[(n - 1) / 2] + sorted_numbers[n / 2]) / 2.0;
}

float calculate_mean(float numbers[], int size) {
    if (size == 0) {
        printf("Array is empty. Cannot calculate mean.\n");
        return 0.0;
    }

    float total = 0.0;
    for (int i = 0; i < size; i++) {
        total += numbers[i];
    }

    float mean = total / size;
    return mean;
}

void calculate_mode(int numbers[], int size) {
    if (size == 0) {
        printf("Array is empty. Cannot calculate mode.\n");
        return;
    }

    // Initialize variables to store mode information
    int maxCount = 0, mode = numbers[0];

    for (int i = 0; i < size; i++) {
        int count = 1;

        // Check the frequency of the current number
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }

        // Update mode information if the current number has a higher frequency
        if (count > maxCount) {
            maxCount = count;
            mode = numbers[i];
        }
    }

    printf("The mode of the numbers is: %d\n", mode);
}

void bubbleSort(int numbers[], int size) {
    // Bubble sort for sorting the array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

float calculate_median(int numbers[], int size) {
    if (size == 0) {
        printf("Array is empty. Cannot calculate median.\n");
        return 0.0;
    }

    // Sort the array in ascending order
    bubbleSort(numbers, size);

    // Calculate the median based on the sorted array
    if (size % 2 == 0) {
        // If the array has an even number of elements, take the average of the middle two
        return (float)(numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    } else {
        // If the array has an odd number of elements, simply take the middle element
        return (float)numbers[size / 2];
    }
}

float calculate_mean(int numbers[], int size) {
    if (size == 0) {
        printf("Array is empty. Cannot calculate mean.\n");
        return 0.0;
    }

    int total = 0;
    for (int i = 0; i < size; i++) {
        total += numbers[i];
    }

    return (float)total / size;
}

float calculate_standard_deviation(int numbers[], int size) {
    if (size == 0) {
        printf("Array is empty. Cannot calculate standard deviation.\n");
        return 0.0;
    }

    float mean = calculate_mean(numbers, size);
    float sum_squared_difference = 0.0;

    for (int i = 0; i < size; i++) {
        sum_squared_difference += pow((float)numbers[i] - mean, 2);
    }

    float variance = sum_squared_difference / size;
    return sqrt(variance);
}

float calculate_variance(int numbers[], int size) {
    if (size == 0) {
        printf("Array is empty. Cannot calculate variance.\n");
        return 0.0;
    }

    float mean = calculate_mean(numbers, size);
    float sum_squared_difference = 0.0;

    for (int i = 0; i < size; i++) {
        sum_squared_difference += pow((float)numbers[i] - mean, 2);
    }

    return sum_squared_difference / size;
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
printf("5. Sine (^)\n");
printf("6. Cosine\n");
printf("7. Tangent (tan)\n");
printf("8. ArcSine (sin)\n");
printf("9. ArcCosine (cos)\n");
printf("10. ArcTangent (tan)\n");
printf("11. Exponentiation\n");
printf("12. Square Root\n");
printf("13. Cube Root\n");
printf("14. nth Root\n");
printf("15. Factorial\n");
printf("16. Absolute Value\n");
printf("17. Logarithm (base 10)\n");
printf("18. Natural Logarithm (base e)\n");
printf("19. Custom Base Logarithm\n");
printf("20. mean\n");
printf("21. mode\n");
printf("22. median\n");
printf("23. Standard deviation\n");
printf("24. Variance\n");
printf("25.Modulus (remainder) \n");
printf("26. Percentage calculation\n");
printf("27. Greatest Common Divisor (GCD)\n");
printf("28.Least Common Multiple (LCM)\n");
printf("29 Exit (E)\n");

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

case 5:
    printf("Enter a floating point number: ");
    scanf("%f", &float1);
    printf("Sine: %.2f\n", sine(float1));
    break;

case 6:    
    printf("Enter a floating point number: ");
    scanf("%f", &float1);
    printf("Cosine: %.2f\n", cosine(float1));
    break;

case 7:    
    printf("Enter a floating point number: ");
    scanf("%f", &float1);
    printf("Tangent: %.2f\n", tangent(float1));
    break;

case 8:    
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

case 9:   
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

case 10:    
    print_math_atan();
    print_math_atan2();
    break;

case 11:
    printf("Enter a base and an exponent: ");
    scanf("%f %f", &float1, &float2);
   printf("Power: %.2f\n", power(float1, float2));
    break;

case 12:
    printf("Enter a number for square root: ");
    scanf("%f", &float1);
    printf("Square root: %.2f\n", square_root(float1));
    break;

case 13:
    printf("Enter a number for cube root: ");
    scanf("%f", &float1);
    printf("Cube root: %.2f\n", cube_root(float1));
    break;

case 14:
    printf("Enter a base and an exponent for nth root: ");
    scanf("%f %f", &float1, &float2);
    printf("nth root: %.2f\n", nth_root(float1, float2));
    break;

case 15:
    printf("Enter a number for factorial: ");
    scanf("%d", &num1);
    printf("Factorial: %d\n", factorial(num1));
     break;

case 16:
     printf("Enter the number: ");
     scanf("%lf", &num1);          
     printf("absoluteValue %.4lf\n",absolute_value (num1));
                break;

case 17:
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
    
case 18:
       {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    result = log(num); // calculates the natural logarithm of num

    printf("The natural logarithm of %.2lf is %.2lf\n", num, result);

    return 0;
}
break;
         
  case 19:
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
 case 20:
 {
    int size;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    float numbers[size];

    // Input array elements
    printf("Enter the elements separated by spaces:\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &numbers[i]);
    }

    // Calculate and print the mean
    float result = calculate_mean(numbers, size);
    printf("The mean of the numbers is: %.2f\n", result);
}

    break;

  case 21:
{
    int size;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    // Input array elements
    printf("Enter the elements separated by spaces:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate and print the mode
    calculate_mode(numbers, size);
}
break;
  
  case 22:
{
    int size;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    // Input array elements
    printf("Enter the elements separated by spaces:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate and print the median
    float result = calculate_median(numbers, size);
    printf("The median of the numbers is: %.2f\n", result);
}
  break;

  case 23:
  {
    int size;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    // Input array elements
    printf("Enter the elements separated by spaces:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate and print the standard deviation
    float result = calculate_standard_deviation(numbers, size);
    printf("The standard deviation of the numbers is: %.2f\n", result);

    return 0;
}
  break;

case 24:
 {
    int size;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    // Input array elements
    printf("Enter the elements separated by spaces:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate and print the variance
    float result = calculate_variance(numbers, size);
    printf("The variance of the numbers is: %.2f\n", result);

}
break;

case 25:
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

case 26:
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

case 27:
{
	int a=134,b=92,c=72;
	int smallest;
	if(a<b && a<c) {
		smallest = a;
	}else if(b<a && b<c) {
		smallest = b;
	}else{
		smallest = c;
	}
		
	int gcd;
	for(int i=smallest;i>=1;i--) {
		if(a%i==0 && b%i==0 && c%i==0) {
			gcd = i;
			break;
		}
	}
	
	printf("%d",gcd);	
	}
break;

case 28:
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