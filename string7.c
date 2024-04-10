// toggle case 
#include<stdio.h>
int main(){
    char str[25],i;
    printf("\n\nEnter charcters (25 characters limit) : \n\n");
    gets(str);
    for(i=0;str[i] != '\0' ; i++){
        if((str[i] >= 65 && str[i] <=90) || (str[i] >= 97 && str[i] <= 122) ){

            if(i==0 || str[i-1] == ' '){
                if(str[i] >= 65 && str[i] <= 90){
                    str[i] = str[i] + 32;
                }
            }
            else{
                if(str[i] >= 97 && str[i] <= 122){
                    str[i] = str[i] - 32;
                }
            }
        }
        printf("%c",str[i]);
    }
    return 0;
}