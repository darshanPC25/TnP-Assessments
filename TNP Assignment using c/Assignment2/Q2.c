// Write a C program to find maximum between three numbers using conditional operator.

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    
    printf("enter your first number");
    scanf("%d",&num1);
    printf("enter your second number");
    scanf("%d",&num2);
    printf("enter your third number");
    scanf("%d",&num3);
    if (num1<num2){
        if(num2<num3){
            printf("3rd number is Greater");
        }
        else
        {
            printf("2nd number is Greater");
        }
    }
    else{
        if(num1<num3){
            printf("1st number is Greater");
        }
        else
        {
            printf("2nd number is Greater");
        }
    }
} 
