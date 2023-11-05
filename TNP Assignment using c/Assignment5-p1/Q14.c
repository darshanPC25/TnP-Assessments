//todo Write a C program to calculate sum of digits of a number.
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter The Number: ");
    scanf("%d",&n);
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits of a number is %d",sum);
    return 0;
}