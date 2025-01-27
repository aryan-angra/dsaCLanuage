#include<stdio.h>
#include<stdlib.h>
# define MAX 100
int top = -1, i;
char stack[MAX];

// checking if stack is full
int isFull() {
    return top == MAX - 1;
} 

// checking is stack is empty
int isEmpty() { 
    return top == -1; 
}

// Push function here, inserts value in stack and increments stack top by 1
void push(char item) {
    if (isFull()) 
        return; 
	top++;
	stack[top] = item;
}

// Function to remove an item from stack.  It decreases top by 1 
int pop() { 
    if (isEmpty()) 
        return INT_MIN; 
        
    // decrements top and returns what has been popped      
    return stack[top--]; 
} 

// Function to return the top from stack without removing it 
int peek(){ 
    if (isEmpty()) 
        return INT_MIN; 
    return stack[top]; 
} 

// A utility function to check if the given character is operand 
int checkIfOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 

// Fucntion to compare precedence
// If we return larger value means higher precedence 
int precedence(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 

// The driver function for infix to postfix conversion 
int getPostfix(char* expression) 
{ 
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i) 
    { 
        // Here we are checking is the character we scanned is operand or not
        // and this adding to to output. 
        if (checkIfOperand(expression[i])) 
            expression[++j] = expression[i]; 

        // Here, if we scan character ‘(‘, we need push it to the stack. 
        else if (expression[i] == '(') 
            push(expression[i]); 

        // Here, if we scan character is an ‘)’, we need to pop and print from the stack  
        // do this until an ‘(‘ is encountered in the stack. 
        else if (expression[i] == ')') 
        { 
            while (!isEmpty(stack) && peek(stack) != '(') 
                expression[++j] = pop(stack); 
            if (!isEmpty(stack) && peek(stack) != '(') 
                return -1; // invalid expression              
            else
                pop(stack); 
        } 
        else // if an opertor
        { 
            while (!isEmpty(stack) && precedence(expression[i]) <= precedence(peek(stack))) 
                expression[++j] = pop(stack); 
            push(expression[i]); 
        } 

    } 

    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty(stack)) 
        expression[++j] = pop(stack); 

    expression[++j] = '\0'; 
    
}

void reverse(char *exp){
    int size = 0;
    for(i=0;exp[i]!='\0';i++){
        size++;
    }
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }

    for(i=0;i<size;i++){
        exp[i] = temp[i];
    }
}
void brackets(char* exp){
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
} 
void InfixtoPrefix(char *exp, int expSize){

    int size = expSize;

    // reverse string
    reverse(exp);
    //change brackets
    brackets(exp);
    //get postfix
    getPostfix(exp);
    // reverse string again
    reverse(exp);
}

int main()
{    
    int expLength;

    char expression[30]; 
    printf("Enter  infix expression : ");
    gets(expression);
    for(i=0;expression[i]!= '\0';i++){
        expLength++;
    }
    InfixtoPrefix(expression,expLength); 

    printf("The prefix is: ");
    printf("%s\n",expression);

    return 0; 
}
// OUTput->

// Enter  infix expression : A*B+C/D
// The prefix is: +*AB/CD