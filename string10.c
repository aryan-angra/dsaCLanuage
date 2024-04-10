#include<stdio.h>
int main(){
    char str[20];
    char replaceChar, updChar;
    int i;
    printf("\nEnter string : ");
    gets(str);
    printf("\nEnter the character you want to replace and insert at that position: \n");
    scanf("%c\n%c",&replaceChar, &updChar);
    for(i=0;str[i] != '\0';i++){
        if(str[i] == replaceChar){
            str[i] = updChar;
            break;
        }
    }
    puts(str);
    return 0;
}