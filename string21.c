#include<stdio.h>
int main(){
    char str[20], repChar, upChar;
    int i;
    printf("Enter string : ");
    gets(str);
    printf("Enter the character you want to replace and character to be added at that occurencies : \n");
    scanf("%c\n%c",&repChar,&upChar);
    for(i=0;str[i]!='\0';i++){
        if(str[i] == repChar || str[i]+32 == repChar || str[i]-32 == repChar){
            str[i] = upChar;
        }
        printf("%c",str[i]);
    }

    return 0;
}