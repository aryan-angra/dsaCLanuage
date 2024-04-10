#include<stdio.h>
int main(){
    char str1[15], str2[15], concat[20], i, j;
    printf("Enter string 1 : ");
    gets(str1);
    printf("\nEnter string 2 : ");
    gets(str2);
    while (str1[i] != '\0') {
        concat[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0') {
        concat[j] = str2[i];
        i++;
        j++;
    }
    concat[j] = '\0';
    puts(concat);
    return 0;
}