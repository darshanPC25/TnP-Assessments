//TODO Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    if(num%5==0 && num%11==0){
        printf("The number is Divisible By 5 and 11");
    }
    else{
        printf("The number is Not Divisible By 5 and 11");
    }
    return 0;
}