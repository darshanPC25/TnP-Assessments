//Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items
#include <stdio.h>

int main() {
    float weight1, weight2, num1, num2, average;

    // Input weights and numbers of purchases for both items
    printf("Weight - Item1: ");
    scanf("%f", &weight1);
    printf("No. of item1: ");
    scanf("%f", &num1);
    
    printf("Weight - Item2: ");
    scanf("%f", &weight2);
    printf("No. of item2: ");
    scanf("%f", &num2);

    // Calculate the average value
    average = ((weight1 * num1) + (weight2 * num2)) / (num1 + num2);

    // Display the average value
    printf("Average Value = %f\n", average);

    return 0;
}
