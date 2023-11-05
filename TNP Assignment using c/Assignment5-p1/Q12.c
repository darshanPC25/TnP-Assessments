//todo Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
int main(){
    int n,first,last,sum;
    printf("Enter The Number: ");
    scanf("%d",&n);
    last=n%10;
    while(n>0){
        first=n%10;
        n/=10;
    }
    sum=first+last;
    printf("Sum of first and last digit of a number is %d",sum);
    return 0;
}