// Write a C program to Swap two Numbers Without Using temporary variable.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("\nEnter The First Number: ");
    scanf("%d",&num1);
    printf("\nEnter The Second Number: ");
    scanf("%d",&num2);

    printf("\nBefore swaping Number:%d and %d", num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nAfter swaping Number:%d and %d", num1,num2);
    return 0;    
}