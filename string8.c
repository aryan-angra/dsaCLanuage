#include<stdio.h>
void reverseStr(char *str){
    if(*str != '\0'){
        reverseStr(str+1);
            printf("%c",*str); 
    }
}
int main(){
    char str[20];
    printf("Enter string : ");
    gets(str);
    printf("\nReversing string..\n");
    reverseStr(str);
    return 0;
}