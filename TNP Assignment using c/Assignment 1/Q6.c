//Write a program in C that takes minutes as input, and display the total number of hours and minutes.
#include<stdio.h>
int main(){
    int min,hrs,min2;
    printf("Input minutes: ");
    scanf("%d",&min);

    hrs=min/60;
    min2=min%60;
    printf(" %d Hours, %d Minutes",hrs,min2);
    return 0;

}