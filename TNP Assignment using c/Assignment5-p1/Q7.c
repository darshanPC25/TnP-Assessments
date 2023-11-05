//todo Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter The Number: ");
    scanf("%d",&n);
    while(n>0){
        if(n%2==0){
            sum+=n;
        }
        n--;
    }
    printf("Sum of all even numbers between 1 to n is %d",sum);
    return 0;
}