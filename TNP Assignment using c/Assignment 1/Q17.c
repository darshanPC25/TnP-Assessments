// Write a C program to calculate the distance between the two points.
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Input coordinates of the two points
    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1);
    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2);

    // Calculate the distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the distance with four decimal places
    printf("Distance between the said points: %.4lf\n", distance);

    return 0;
}
