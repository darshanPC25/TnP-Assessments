//todo Write a C program to print multiplication table of any number.
#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter The Number: ");
    scanf("%d",&n);
    while(i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
