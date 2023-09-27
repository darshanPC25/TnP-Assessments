//Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple interest in C programming.
#include <stdio.h>

int main() {
    float principal, time, rate, simpleInterest;

    // Input principal amount, time, and rate
    printf("Enter principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter time in years (T): ");
    scanf("%f", &time);

    printf("Enter rate of interest per year (R): ");
    scanf("%f", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Display the result
    printf("Simple Interest (SI) = %.2f\n", simpleInterest);

    return 0;
}
