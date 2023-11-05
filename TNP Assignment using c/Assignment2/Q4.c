#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0){
        printf("enter the leap year:");
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}