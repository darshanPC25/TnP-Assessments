//An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C rogramming.

#include <stdio.h>

int main() {
    int x = 5, y = 8;
    int age = 20, isStudent = 0;
    int isFinished = 1;

    // Logical AND (&&)
    if (x > 0 && y < 10) {
        printf("Both conditions are true.\n");
    } else {
        printf("At least one condition is false.\n");
    }

    // Logical OR (||)
    if (age < 18 || isStudent == 1) {
        printf("Either age is less than 18 or the person is a student.\n");
    } else {
        printf("Age is not less than 18, and the person is not a student.\n");
    }

    // Logical NOT (!)
    if (!isFinished) {
        printf("The task is not finished.\n");
    } else {
        printf("The task is finished.\n");
    }

    return 0;
}
