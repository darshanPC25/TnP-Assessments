//todo Write a C program to swap first and last digits of a number.
#include<stdio.h>
int main(){
    int n,first,last,swap;
    printf("Enter The Number: ");
    scanf("%d",&n);
    last=n%10;
    while(n>0){
        first=n%10;
        n/=10;
    }
    swap=last;
    last=first;
    first=swap;
    printf("After Swapping First digit of a number is %d\n",first);
    printf("After Swapping Last digit of a number is %d",last);
    return 0;
}