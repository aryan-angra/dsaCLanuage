#include<stdio.h>
int main(){
    char str[20];
    int i;
    printf("Enter string : ");
    gets(str);
    printf("\n\nCharacters identified : \n\n");
    for(i=0;str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <= 122){
            printf("\n%c - > Small Alphabet",str[i]);
        }
        else if(str[i] >= 65 && str[i] <= 90){
             printf("\n%c - > Capital Alphabet",str[i]);
        }
        else if(str[i] >= 48 && str[i] <= 57){
            printf("\n%c - > Number",str[i]);
        }
        else if(str[i] == 32){
            printf("\n%c - > Whitespace", str[i]);
        }
        else{
            printf("\n%c - > Special Character",str[i]);
        }
    }
    
    return 0;
}