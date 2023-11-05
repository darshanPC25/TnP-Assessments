//Write a C program A relational operator checks the relationship between two operands. if the relation is true, it returns 1; if the relation is false, it returns value 0.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);


    if(num1==num2)
        printf("number1 == number2 ---->0\n");
    else    
        printf("number1 == number2 ---->1\n");
    if(num1>num2)
        printf("number1 > number2 ---->0\n");
    else    
        printf("number1 > number2 ---->1\n");
    if(num1<num2)
        printf("number1 < number2 ---->0\n");
    else    
        printf("number1 < number2 ---->1\n");
    if(num1!=num2)
        printf("number1 != number2 ---->0\n");
    else    
        printf("number1 != number2 ---->1\n");
    if(num1>=num2)
        printf("number1 >= number2 ---->0\n");
    else    
        printf("number1 >= number2 ---->1\n");
    if(num1<=num2)
        printf("number1 <= number2 ---->0\n");
    else    
        printf("number1 <= number2 ---->1\n");
    return 0;
}