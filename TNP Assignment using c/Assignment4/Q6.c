// Write a C program to check whether a number is positive, negative or zero using switch case.
#include <stdio.h>

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", & num);

    // Using a switch-case with a single case to categorize the number
    switch (( num > 0) - ( num < 0)) {
        case 1:
            printf("Positive number\n");
            break;
        case -1:
            printf("Negative number\n");
            break;
        default:
            printf("Zero\n");
            break;
    }

    return 0;
}
