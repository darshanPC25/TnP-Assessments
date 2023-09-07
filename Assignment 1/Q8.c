//WAP in c to convert specific day into year , week and day.
#include<stdio.h>
int main(){
    int days,year,week;
    printf("Enter The Number of days: ");
    scanf("%d",&days);
    year=days/365;
    days%=365;
    week=days/7;
    days%=7;
    printf("\nYears:%d\nWeeks:%d\nDays:%d\n",year,week,days);
    return 0;
}