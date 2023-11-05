// Write a C program to check whether an alphabet is vowel or consonant using switch case.
int main(){
    int choice;
    printf("Enter a number from 1 to 12 for Print Name of the Months: ");
    scanf("%d",&choice);

    switch(choice){
        case 'a': 
        case 'A': 
        case 'e': 
        case 'E': 
        case 'i': 
        case 'I': 
        case 'o': 
        case 'O': 
        case 'u': 
        case 'U': 
            printf("Vowel");
            break;
        default:
            printf("Cons");
    }

}