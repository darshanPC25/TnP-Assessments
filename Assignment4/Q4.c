//Write a C program to find maximum between two numbers using switch case.
#include<stdio.h>
int main(){
    int num1 , num2;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);

    switch(num1>num2){
        case 0:
            printf("%d is Greater",num2);
            break;
        default:
            printf("%d is Greater",num1);
    }
    return 0;
}