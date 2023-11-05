//TODO Write a C program to print the English word of a digit like (One, Two,Three,......,Nine) if Digit is between 1 to 9,      Otherwise tell whether it&#39;s Even or Odd if Digit is greater than 9.
#include <stdio.h>

int main() {
    int num;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 9) {
        // Convert the digit to its English word
        switch (num) {
            case 1:
                printf("One\n");
                break;
            case 2:
                printf("Two\n");
                break;
            case 3:
                printf("Three\n");
                break;
            case 4:
                printf("Four\n");
                break;
            case 5:
                printf("Five\n");
                break;
            case 6:
                printf("Six\n");
                break;
            case 7:
                printf("Seven\n");
                break;
            case 8:
                printf("Eight\n");
                break;
            case 9:
                printf("Nine\n");
                break;
        }
    } else if (num > 9) {
        // Check if the number is even or odd
        if (num % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
