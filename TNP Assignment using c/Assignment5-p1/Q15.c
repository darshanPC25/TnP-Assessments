//todo Write a C program to calculate product of digits of a number.
#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter The Number: ");
    scanf("%d",&n);
    while(n>0){
        product*=n%10;
        n/=10;
    }
    printf("Product of digits of a number is %d",product);
    return 0;
}
