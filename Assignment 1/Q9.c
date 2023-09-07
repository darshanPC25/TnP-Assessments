//Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
#include<stdio.h>
int main(){
    int amt,n100,n50,n20,n10,n5,n2,n1;
    printf("Enter Tha Amount: ");
    scanf("%d",&amt);
    n100=amt/100;
    amt%=100;
    n50=amt/50;
    amt%=50;
    n20=amt/20;
    amt%=20;
    n10=amt/10;
    amt%=10;
    n5=amt/5;
    amt%=5; 
    n2=amt/2;
    amt%=2;
    n1=amt/1;
    amt%=1;
    printf("\n%d Note(s) of 100\n%d Note(s) of 50\n%d Note(s) of 20\n%d Note(s) of 10\n%d Note(s) of 5\n%d Note(s) of 2\n%d Note(s) of 1",n100,n50,n20,n10,n5,n2,n1);
    return 0;
    

}