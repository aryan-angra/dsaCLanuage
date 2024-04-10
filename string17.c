#include<stdio.h>
int main(){
    char str[25];
    int i, wordCount=0;
    printf("Enter string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i] == 32 || str[i] == 13){
            wordCount++;
        }
    }
    printf("\nNumber of words present in string is %d",wordCount);
    return 0;
}