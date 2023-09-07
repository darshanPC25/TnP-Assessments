//WAP in c to read and display all type of Variable
#include<stdio.h>
int main(){
    int i;
    float f;
    char ch;
    scanf("%d",&i);
    scanf("%f",&f);
    fflush(stdin);
    scanf("%c",&ch);
    printf("%d\n%f\n%c",i,f,ch);
    return 0;
}