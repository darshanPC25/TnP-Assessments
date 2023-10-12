//TODO Write a C program to enter month number and print total number of days in month. (Excluding Leap Year)
#include <stdio.h>

int main() {
    int month;

    // Input
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("31 days\n");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("30 days\n");
                break;
            case 2:
                printf("28 or 29 days (non-leap year)\n");
                break;
        }
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}
