#include<stdio.h>
int top=-1, stack[20],i;
void push(char value){
    if(top == 19){
        printf("Stack is full");
    }
    else{
        stack[++top] = value;
    }
}
void pop(){
    printf("%c",stack[top--]);
}
int main(){
    char str[20], length=0;
    printf("Enter a string (max 20 characters) : ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    for(i=0;i<length;i++){
        push(str[i]);
    }
    for(i=0;i<length;i++){
        pop();
    }
    return 0;
}
