//Write a C program to performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter The First Number: ");
    scanf("%d",&num1);
    printf("Enter The Second Number: ");
    scanf("%d",&num2);

    printf("%d + %d = %d\n",num1, num2, num1+num2);
    printf("%d - %d = %d\n",num1, num2, num1-num2);
    printf("%d x %d = %d\n",num1, num2, num1*num2);
    printf("%d / %d = %d\n",num1, num2, num1/num2);
    printf("%d %% %d = %d\n",num1, num2, num1%num2);
    return 0;
}