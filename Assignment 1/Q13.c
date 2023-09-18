// program to find area of an equilateral triangle root 3/4 a square
#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter The Length of side: ");
    scanf("%d",&side);

    printf("Area of Triangle:%.1f",((float)sqrt(3)/4)*pow(side,2));

}