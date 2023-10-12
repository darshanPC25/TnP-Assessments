//TODO Write a C program to calculate the Area of two rectangles and print the length and breadth of the rectangle whose Area is greater.
#include <stdio.h>

int main() {
    float length1, breadth1, area1;
    float length2, breadth2, area2;

    //area1
    printf("Enter the length of the first rectangle: ");
    scanf("%f", &length1);
    printf("Enter the breadth of the first rectangle: ");
    scanf("%f", &breadth1);

    //area2
    printf("Enter the length of the second rectangle: ");
    scanf("%f", &length2);
    printf("Enter the breadth of the second rectangle: ");
    scanf("%f", &breadth2);


    area1 = length1 * breadth1;
    area2 = length2 * breadth2;
    //area print
    printf("Area of the first rectangle: %.2f square units\n", area1);
    printf("Area of the second rectangle: %.2f square units\n", area2);

    //comparasion bwt area1 and area 2
    if (area1 > area2) {
        printf("The first rectangle has a greater area.\n");
        printf("Dimensions of the first rectangle - Length: %.2f, Breadth: %.2f\n", length1, breadth1);
    } else if (area2 > area1) {
        printf("The second rectangle has a greater area.\n");
        printf("Dimensions of the second rectangle - Length: %.2f, Breadth: %.2f\n", length2, breadth2);
    } else {
        printf("Both rectangles have the same area.\n");
    }

    return 0;
}
