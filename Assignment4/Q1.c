//Write a C program to print day of week name using switch case.
#include<stdio.h>
int main(){
    int choice;
    printf("Enter a number from 1 to 7 for Print Name of the Week: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thrusday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}