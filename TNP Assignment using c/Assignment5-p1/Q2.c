//todo Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    while(n>0){
        printf("%d ",n);
        n--;
    }
    return 0;
}