#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top = NULL;
void push(int item){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = item;
	newNode->next = top;
	top = newNode;
}
void pop(){
	if(top == NULL){
		printf("\nStack is empty !");
	}
	else{
		struct node *delNode;
		delNode = top;
		top = top->next;
		printf("\n%d deleted from the stack",delNode->data);
		free(delNode);
	}
}
void traverse(){
	printf("\nTop element in the stack is %d",top->data);
}

int main(){
	int choice, insertValue;
	while(1){
	printf("\n\nOperations performed by stack : \n1. Push\n2. Pop\n3. Traverse the stack\n4. Exit\n\n");
	printf("Enter choice (1-4): ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter number to insert : ");
			scanf("%d",&insertValue);
			push(insertValue);
			break;
		case 2:
			pop();
			break;
		case 3:
			traverse();	
			break;
		case 4:
			exit(0);
		case 6:
		default:
			printf("Invalid selection");
			break;
	 }
	}
}
