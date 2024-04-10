#include<stdio.h>
int main(){
    char str[20];
    int i;
    printf("Enter string : ");
    gets(str);
    printf("\nConverting string to numbers : ");
    for(i=0;str[i]!='\0';i++){
        printf("%d ",str[i]);
    }
    return 0;
}