#include<stdio.h>
int main(){
    char str[20], reverseStr[20];
    int i,failed=0,length=0;
    printf("\nEnter string (limit : 20 characters) : \n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
       length++;
    }
    for(i=0;i<length;i++){
        if(str[i] != str[length-i-1]){
            failed=1;
        }
    }
    if(failed){
        printf("\n%s is not palindrome.",str);
    }
    else{
        printf("\n%s is palindrome.",str);
    }
    return 0;
}