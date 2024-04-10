#include<stdio.h>
int main(){
    char str[20];
    int i,j,temp;
    printf("Enter a word : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        for(j=i+1;str[j]!='\0';j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("\nAfter sorting in alphabet order, word is : ");
    puts(str);
    return 0;
}