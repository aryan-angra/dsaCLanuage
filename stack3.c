#include<stdio.h>
char stack[30];
int top=-1,i,result=0;

void push(char bracket){
    stack[++top] = bracket;
}
int pop(){ 
    int previous = top-1;
    if((stack[previous] == '{' && stack[top] == '}') || (stack[previous] == '(' && stack[top] == ')') || (stack[previous] == '[' && stack[top] == ']') ){
        top = top-2;
        result=0;
    }
    else{
        result++;
        return 1;
    }
}
int main(){
    char exp[30];
    int length=0;
    printf("\nEnter expression to execute bracket matching : ");
    gets(exp);
    for(i=0;exp[i]!='\0';i++){
        length++;
    }
    for(i=0;i<length;i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
            pop();
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']'){
            push(exp[i]);
            pop();
        }  
    }
    if(result == 0){
        printf("\nExpression brackets balanced");
    }
    else{
        printf("\nExpression brackets not balanced");
    }
    return 0;
}