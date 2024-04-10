#include<stdio.h>
int main(){
    char str[20];
    int i,j,count=0;
    printf("Enter string : ");
    gets(str);
    printf("\nFrequency of each character : \n");
    for(i=0;str[i]!= '\0';i++){
       for(j=i+1;str[j]!='\0';j++){
        if(str[i] == str[j]){
            ++count;
        }
       }
       printf("%c : %d\n",str[i], count);
    }
    return 0;
}