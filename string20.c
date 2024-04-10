#include <stdio.h>
 
int main() {
    char str[25], substr[25];
    int index,i,j;
    printf("\nEnter a string : ");
    gets(str);
    printf("\nEnter a substring to find its starting index in the above string : ");
    gets(substr);
    for(i=0;str[i] != '\0'; i++) {
        for(j=0; substr[j]!='\0';j++){
            if(str[i+j] != substr[j]){
                index = -1;
                break;
            }
            index = i;
        }
        if(index!=-1){
            break;
        }
    }
    if(index == -1){
        printf("\nSubstring is not present in the string.");
    }
    else{
    printf("\nIndex of first occurrence  : %d\n", index);
    }
    return 0;
}