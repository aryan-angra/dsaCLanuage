#include<stdio.h>
int main(){
    char str[15];
    int i,length=0;

    printf("\nEnter string (limit : 15 characters) : \n");
    gets(str);
    for(i=0;str[i]!= '\0';i++){
        if(str[i] >='A' &&  str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
            printf("%c",str[i]);
    }   
    return 0;
}