//WAP in c to calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    printf("Enter The Principle: ");
    scanf("%f",&p);
    printf("Enter The Rate: ");
    scanf("%f",&r);
    printf("Enter The Time In Year: ");
    scanf("%f",&t);

    printf("Compound Intrest: %f",p*pow(1+(r/100),t));
}