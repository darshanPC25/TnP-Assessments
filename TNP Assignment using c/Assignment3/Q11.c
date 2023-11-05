//TODO Write a C program to check whether triangle is equilateral, scalene or isosceles Input
#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral Triangle\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }

    return 0;
}
