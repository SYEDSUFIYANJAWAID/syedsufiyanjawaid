#include <stdio.h>
#include <math.h>


float calculateDistance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2, distance;

  
    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    
    distance = calculateDistance(x1, y1, x2, y2);

   
    printf("Distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}




