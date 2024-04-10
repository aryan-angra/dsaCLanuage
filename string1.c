#include<stdio.h>
int main(){
    char str[20], length=0, i;
    printf("\nEnter string  (Max : 20 characters) : \n");
    gets(str);
    for(i=0;str[i]!= '\0';i++){
        length++;
    }
    printf("\nLength of string entered is %d characters\n", length);
    return 0;
}