//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
#include <stdio.h>

int main() {
    int totalDistance;
    float totalFuel, averageConsumption;

    // Input total distance and total fuel spent
    printf("Input total distance in km: ");
    scanf("%d", &totalDistance);
    
    printf("Input total fuel spent in liters: ");
    scanf("%f", &totalFuel);

    // Calculate average consumption
    averageConsumption = (float)totalDistance / totalFuel;

    // Display the average consumption with two decimal places
    printf("Average consumption (km/lt) %.3f\n", averageConsumption);

    return 0;
}
