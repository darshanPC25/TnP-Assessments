//TODO Write a C program to check even or odd using bitwise operator.
#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use a bitwise AND operator to check the least significant bit (LSB)
    if (number & 1) {
        printf("%d is an odd number.\n", number);
    } else {
        printf("%d is an even number.\n", number);
    }

    return 0;
}
