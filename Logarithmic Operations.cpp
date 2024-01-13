#include <stdio.h>
#include <math.h>
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
printf("1. mean\n");
printf("2. mode\n");
printf("3. median\n");
printf("4. Standard deviation\n");
printf("5. Variance\n");
int num1, num2 , base;
    float float1, float2;
    char choice;
printf("\nEnter your choice: ");
  scanf("%d", &choice);

switch (choice){
case 1:
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

  case 2:
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
  
  case 3:
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

  case 4:
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

case 5:
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
}
}while(choice != 0);
 

    return 0;
}
