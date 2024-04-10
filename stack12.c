#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STACK_MAX 60
#define OPERAND 10
#define OPERATOR 20

typedef struct preexp{
    int top;
    int stack[STACK_MAX];
} stack;
void init(stack* st){
    st->top = -1;
}
void push(stack* st,int num){
    if(st->top==STACK_MAX){
        printf("Stack overflow\n");
        exit(-1);
    }
    st->top++;
    st->stack[st->top]=num;
}
int pop(stack* st){
    int num;
    if(st->top<0){
        printf("Stack is empty\n");
        exit(-1);
    }
    num=st->stack[st->top];
    st->top--;
    return num;
}
int top(stack* st){
    return st->stack[0];
}
void eval(stack* st,char op,int num1,int num2){
    int res;
    switch (op)
    {
    case '+':
        /* code */
        break;
    
    default:
        break;
    }
}