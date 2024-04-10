#include<stdio.h>
int main(){
    char str[20];
    int spaceCount=0, i;
    printf("Enter string : ");
    gets(str);
    for(i=0;str[i] != '\0'; i++){
        if(str[i] == ' '){
            spaceCount++;
        }
    }
    printf("\nNumber of whitespace in the string is %d times",spaceCount);
    return 0;
}