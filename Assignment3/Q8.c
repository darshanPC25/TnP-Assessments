//TODO Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include <stdio.h>

int main() {
    float a1, a2, a3;

    // Input angles
    printf("Enter the first angle: ");
    scanf("%f", &a1);
    printf("Enter the second angle: ");
    scanf("%f", &a2);
    printf("Enter the third angle: ");
    scanf("%f", &a3);

    // Check if the angles form a valid triangle
    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3) == 180) {
        printf("The angles form a valid triangle.\n");
    } else {
        printf("The angles do not form a valid triangle.\n");
    }

    return 0;
}
