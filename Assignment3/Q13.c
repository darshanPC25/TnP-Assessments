//TODO Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.Calculate percentage and grade according to following:
#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float totalMarks, percentage;
    char grade;

    // Input marks for each subject
    printf("Enter the marks for Physics: ");
    scanf("%f", &physics);
    printf("Enter the marks for Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter the marks for Biology: ");
    scanf("%f", &biology);
    printf("Enter the marks for Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter the marks for Computer: ");
    scanf("%f", &computer);

    // Calculate the total marks and percentage
    totalMarks = physics + chemistry + biology + mathematics + computer;
    percentage = (totalMarks / 500) * 100;

    // Determine the grade based on the percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Display the percentage and grade
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
