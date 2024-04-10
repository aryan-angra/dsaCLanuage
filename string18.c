#include<stdio.h>
int main(){
    char str[20];
    int digitCount=0,vowelCount=0,specialChars=0,capAlpha=0,smallAlpha=0,whiteSpace=0;
    printf("Enter string : ");
    gets(str);
    for(int i=0; str[i] != '\0';i++){
        if((str[i] >= 'a' ) && (str[i] <= 'z')){
            smallAlpha++;
        }
        if((str[i] >= 'A' ) && (str[i] <= 'Z')){
            capAlpha++;
        }
        if(str[i] == 32){
            whiteSpace++;
        }
        if(str[i] >= 48 && str[i] <= 57){
            digitCount++;
        }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowelCount++;
        }
        else{
            specialChars++;
        }
       
    }
    printf("\nSmall alphabhets : %d",smallAlpha);
    printf("\nCapital alphabhets : %d",capAlpha);
    printf("\nwhitespace : %d",whiteSpace);
    printf("\nNumbers : %d",digitCount);
    printf("\nVowels : %d",vowelCount);
    printf("\nSpecial Characters : %d", specialChars);
    return 0;
}