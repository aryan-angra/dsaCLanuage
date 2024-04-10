#include<stdio.h>
int main(){
    char str[30];
    int i,length=0;

    printf("\nEnter string (limit : 30 characters) : \n");
    gets(str);
    for(i=0;str[i]!= '\0';i++){
        length++;
    }
    printf("Reverse of string : ");
    for(i=length;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}