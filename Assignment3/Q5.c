//TODO Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter Your Input: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("LowerCase");
    }
    else if (ch>='A' && ch<='Z'){
        printf("UpperCase");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}