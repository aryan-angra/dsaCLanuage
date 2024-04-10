#include<stdio.h>
int main(){
    char str1[20], str2[20];
    int i, length=0;
    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
     for(i=0;str1[i]!= '\0';i++){
        length++;
    }
    printf("\nComparing strings...\n");
    for(i=0;str1[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            printf("Strings are not equal..");
            break;
        }
    }
    if(i == length){
        printf("Strings are equal..");
    }
    return 0;
}