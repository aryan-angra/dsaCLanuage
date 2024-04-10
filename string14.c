#include<stdio.h>
int main(){
    char str[20], reverseStr[20];
    int i,length=0;
   printf("\nEnter string (limit : 15 characters) : \n");
    gets(str);
    for(i=0;str[i]!= '\0';i++){
        reverseStr[i] = str[i];
        length++;
    }
    printf("Copying and printing reverse of string : ");
    for(i=length;i>=0;i--){
        printf("%c",reverseStr[i]);
    }
    return 0;
}