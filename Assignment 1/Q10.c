// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds
#include<stdio.h>
int main(){
    int sec,min,hrs;
    printf("Enter the Second: ");
    scanf("%d",&sec);

    hrs=sec/3600;
    sec%=3600;
    min=sec/60;
    sec%=60;
    printf("H:M:S- %d:%d:%d",hrs,min,sec);
    return 0;
}