//C program to calculate total average and percentage of five subjects
#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    float total,avg,percent;
    printf("Enter Your Marks of Five subject: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    
    total=s1+s2+s3+s4+s5;
    avg=total/5;
    percent=(total/500)*100;
    printf("Total:%.0f\nAvrage:%.0f\nPercentage:%f",total,avg,percent);
    return 0;
}