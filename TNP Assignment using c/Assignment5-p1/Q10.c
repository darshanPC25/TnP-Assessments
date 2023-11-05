//todo Write a C program to count number of digits in a number.
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter The Number: ");
    scanf("%d",&n);
    while(n>0){
        n/=10;
        count++;
    }
    printf("Number of digits in a number is %d",count);
    return 0;
}