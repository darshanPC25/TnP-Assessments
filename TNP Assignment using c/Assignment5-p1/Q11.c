//todo Write a C program to find first and last digit of a number.
#include<stdio.h>
int main(){
    int n,first,last;
    printf("Enter The Number: ");
    scanf("%d",&n);
    last=n%10;
    while(n>0){
        first=n%10;
        n/=10;
    }
    printf("First digit of a number is %d\n",first);
    printf("Last digit of a number is %d",last);
    return 0;
}