//todo Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter The Number : ");
    scanf("%d",&n);

    while(i++<n){
        printf("%d\t",i);
    }
    return 0;
}