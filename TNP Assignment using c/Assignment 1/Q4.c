//Write a C program that calculates the volume of a sphere.
#include<stdio.h>
#include<math.h>
int main(){
    float r;
    printf("Enter the Radius of Sphere: ");
    scanf("%f",&r);
    printf("Volium: %f",(1.333)*3.141*pow(r,3));
}