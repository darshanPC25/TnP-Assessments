//Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary(with two decimal places) of a particular month
#include<stdio.h>
int main(){
    int id,hrs;
    float sal;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%d",&id);
    printf("Input the working hrs: ");
    scanf("%d",&hrs);
    printf("Salary amount/hr: ");
    scanf("%f",&sal);
    printf("Employees ID =%d\n",id);    
    printf("Salary = U$%.2f\n",sal*hrs);

    
}