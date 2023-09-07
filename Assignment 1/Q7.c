//Write a C program to find the third angle of a triangle if two angles are given.
#include<stdio.h>
int main(){
    int a1,a2;
    printf("Input two angles of triangle : ");
    scanf("%d%d",&a1,&a2);
    printf("Third angle of the triangle : %d",180-a1-a2);

}