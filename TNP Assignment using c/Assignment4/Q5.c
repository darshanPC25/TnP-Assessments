// Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);

    switch(num%2==0){
        case 1:
            printf("Number is Even");
            break;
        default:
            printf("Number is Odd");
    }
    return 0;
}