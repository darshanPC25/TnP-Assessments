//Write a C program that converts kilometers per hour to miles per hour. (1KM = 0.621371 M)
#include<stdio.h>
int main(){
    float km;
    printf("Input kilometers per hour: ");
    scanf("%f",&km);
    printf("%f miles per hour",(km*0.621371));

}